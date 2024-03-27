// boulder.inc.c

void bhv_big_boulder_init(void) {
    vec3f_copy(&o->oHomeVec, &o->oPosVec);

    o->oGravity = 12.0f;
    o->oFriction = 0.999f;
    o->oBuoyancy = 2.0f;
    o->oMoveAngleYaw += ((s16)random_sign() % 0x2000) + 0x4000;
}

void boulder_act_1(void) {
    s16 collisionFlags = object_step_without_floor_orient();

    if ((collisionFlags & OBJ_COL_FLAGS_LANDED) == OBJ_COL_FLAG_GROUNDED && o->oVelY > 10.0f) {
        cur_obj_play_sound_2(SOUND_GENERAL_GRINDEL_ROLL);
        spawn_mist_particles();
    }

    if (o->oForwardVel > 200.0f) { // changed from 70
        o->oForwardVel = 200.0f;
    }

    if (o->oPosY < -1000.0f) { // changed
        o->activeFlags = ACTIVE_FLAG_DEACTIVATED;
    }
    if ( o->oDistanceToMario > 9000.0f) {
        cur_obj_hide();
    }
    else {
        cur_obj_unhide();
    }
}

void bhv_big_boulder_loop(void) {
    cur_obj_scale(1.5f);

    o->oGraphYOffset = 270.0f;

    switch (o->oAction) {
        case 0:
            o->oForwardVel = 0.0f;
            o->oAction = 1;
            break;

        case 1:
            boulder_act_1();
            adjust_rolling_face_pitch(1.5f);
            cur_obj_play_sound_1(SOUND_ENV_BOWLING_BALL_ROLL);
            break;
    }

    set_rolling_sphere_hitbox();
}

void bhv_big_boulder_generator_loop(void) {
    struct Object *boulderObj;

    if (o->oTimer >= 256) {
        o->oTimer = 0;
    }

#ifdef ENABLE_VANILLA_LEVEL_SPECIFIC_CHECKS
    if (!current_mario_room_check(4)
        || is_point_within_radius_of_mario(o->oPosX, o->oPosY, o->oPosZ, 1500)) {
#else 
    if (is_point_within_radius_of_mario(o->oPosX, o->oPosY, o->oPosZ, 1000)) { // c
#endif
        return;
    }

    if (o->oAction == 1) {
        if (!(o->oTimer & 0x3F)) {
            boulderObj = spawn_object(o, MODEL_HMC_ROLLING_ROCK, bhvBigBoulder);
            //boulderObj->oMoveAngleYaw = random_float() * 4096.0f;
        }
        // Stop spawning when too far
        if (o->oDistanceToMario > 12000.0f) {
            o->oAction = 0;
        }
    } // Start spawning when close enough
    if (o->oDistanceToMario < 4500.0f) {
        o->oAction = 1;
    }
    // else {
    //     if (!(o->oTimer & 0x7F)) {
    //         boulderObj = spawn_object(o, MODEL_HMC_ROLLING_ROCK, bhvBigBoulder);
    //         //boulderObj->oMoveAngleYaw = random_float() * 4096.0f;
    //     }
    // }
}

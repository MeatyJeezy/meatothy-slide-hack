void bhv_falling_leaves_init() {
    //leaf emitter
}

void bhv_single_falling_leaf() {
    // if (o->oDistanceToMario > 4000.0f) { // oh no im gonna OPTIMIZE AAAAA IM OPTIMIZING
    //     obj_mark_for_deletion(o);
    // }
    // Apply random spin, have it drift a preset direction
    if (o->oTimer == 0) {
        o->oVelX = 10 + (random_u16() %10);
        o->oVelZ = 10 + (random_u16() %10);
        o->oVelY = -11;
        o->oFaceAnglePitch = random_u16();
        o->oAngleVelRoll = 365 + (random_u16() %100);
        o->oAngleVelPitch = 162 + (random_u16() %60);
        o->oAngleVelYaw = 162 + (random_u16() %60);
    }
    // After x frames, start fade out
    if (o->oTimer++ > 240 || o->oDistanceToMario > 8000.0f) {
        //After fading out all the way disable the leaf
        if ((o->oOpacity -= 6) <= 6) {
            obj_mark_for_deletion(o);
        }
    }
    // Stop moving down when on a floor
    cur_obj_update_floor_height();
    if(o->oPosY-2 <= find_floor_height(o->oPosX, o->oPosY+1, o->oPosZ)) {
        o->oVelY = 0;
        if (o->oVelX > 0)
            o->oVelX--;
        if (o->oVelZ > 0)
            o->oVelZ--;
        if (o->oAngleVelRoll > 0)
            o->oAngleVelRoll -= 50;
        if (o->oAngleVelPitch > 0)
            o->oAngleVelPitch -= 30;
        if (o->oAngleVelYaw > 0)
            o->oAngleVelYaw -= 30;
    }
    // Start accelerating again after sliding off floor
    else if (o->oVelY > -11) {
        o->oVelY -= 1;
    }
    // cant see them when they too far away.
    // if(o->oDistanceToMario > 4000) {
    //     cur_obj_disable_rendering();
    // }
    // else {
    //     cur_obj_enable_rendering();
    // }
    // Move using above vel and angle vels
    cur_obj_move_using_vel();
    cur_obj_rotate_face_angle_using_vel();
    
}
//TODO: BehParam2ndByte determines what kind of leaf it is. Possible variants: regular green, autumn yellow, sakura pink.
void bhv_falling_leaves_loop() {
    // spawn leaves and spin them at whatever angle
    //o->oAngleVelRoll = random_float();
    
    o->oTimer += 1 + random_u16() % 3;
    if(o->oTimer > 90) {
        //spawn new leaf if mario is close enough
        if (o->oDistanceToMario < 7900.0f) {
            spawn_object_relative(0, 0, 0, 0, o, MODEL_FALLING_LEAF, bhvSingleFallingLeaf);
        }
        o->oTimer = 0;
    }
}
// bounce_shroom.inc.c

void bounced_on_shroom() {
    // scale big and small all bouncey-like
    if (o->oTimer % 6 < 3) {
        //obj_scale_xyz(o, 0, (f32)(1.0f + 0.25f*(o->oTimer % 6)), 0);
    }
    //boing squished
    else {

    }
    if (o->oTimer++ > 5){
        cur_obj_scale(1.0f);
        o->oAction = 2;
    }
        
}

void bhv_bounce_shroom_loop() {
    load_object_collision_model();
    cur_obj_set_model(MODEL_BOUNCE_SHROOM);
    switch (o->oAction) {
        case 0:
        //obj_set_collision_data(o, bounce_shroom_collision);
        if (cur_obj_is_mario_on_platform()) {
            // bounce mario at face angle + 90 degrees
            f32 pitch = o->oFaceAnglePitch + DEGREES(90);
            //f32 yaw = o->oFaceAngleYaw;
            //Vec3f mvel;
            f32 cosPitchX = coss(o->oFaceAnglePitch + DEGREES(90));
            // f32 cosPitchY = coss(o->oFaceAnglePitch);
            // launch vectors
            set_mario_action(gMarioState, ACT_DOUBLE_JUMP, 0);
            //gMarioState->vel[0] += (f32)o->oBehParams2ndByte * 1.1f * coss(pitch) * sins(yaw);
            // mvel[0] = coss(pitch) * sins(yaw);
            gMarioState->vel[1] = (f32)o->oBehParams2ndByte * 1.2f * sins(pitch);
            // turn mario to face same direction as mushroom. this is my panacea
            gMarioState->faceAngle[1] = o->oFaceAngleYaw;
            gMarioState->forwardVel -= (f32)o->oBehParams2ndByte * 0.9f * cosPitchX;
            //gMarioState->vel[2] += (f32)o->oBehParams2ndByte * 1.1f * coss(pitch) * coss(yaw);
            // mvel[2] = coss(pitch) * coss(yaw);
            // gMarioState->angleVel[1] = atan2s(mvel[2], mvel[0]);
            // gMarioState->forwardVel += sqrtf(mvel[0]* mvel[0]) + (mvel[2]* mvel[2]);
            o->oAction = 1;
        }
        break;
        case 1:
            bounced_on_shroom();
        break;
        case 2:
        // reset.
            o->oTimer = 0;
            o->oAction = 0;
        break;
    }
    o->oInteractStatus = INT_STATUS_NONE;
}
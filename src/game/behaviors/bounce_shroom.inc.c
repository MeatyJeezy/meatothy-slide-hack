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
        //cur_obj_scale(1.0f);
        o->oAction = 2;
    }
        
}

void bhv_bounce_shroom_loop() {
    load_object_collision_model();
    cur_obj_set_model(MODEL_BOUNCE_SHROOM);
    // Scale based on behparam1
    f32 bparam1scale = (f32)GET_BPARAM1(o->oBehParams) * 0.1f;
    cur_obj_scale(bparam1scale < 0.25f ? 0.25f : bparam1scale);
    switch (o->oAction) {
        case 0:
        if (cur_obj_is_mario_on_platform()) {
            // bounce mario at face angle + 90 degrees
            f32 pitch = o->oFaceAnglePitch + DEGREES(90);
            f32 cosPitchX = coss(o->oFaceAnglePitch + DEGREES(90));
            // launch vectors
            set_mario_action(gMarioState, ACT_DOUBLE_JUMP, 0);
            gMarioState->vel[1] = (f32)o->oBehParams2ndByte * 1.2f * sins(pitch);
            // turn mario to face same direction as mushroom. this is my panacea
            if (o->oFaceAnglePitch != 0)
                gMarioState->faceAngle[1] = o->oFaceAngleYaw;
            
            gMarioState->forwardVel -= (f32)o->oBehParams2ndByte * 0.9f * cosPitchX;
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
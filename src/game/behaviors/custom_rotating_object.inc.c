// water_wheel.inc.c

enum CustomRotatingObjects {
    ROTATING_WATER_WHEEL,
};

void rotating_water_wheel() {
    o->oFaceAngleRoll -= 0x120;
}

void bhv_custom_rotating_object_loop () {
    
    switch (o->oBehParams2ndByte) {
        case ROTATING_WATER_WHEEL:
            cur_obj_scale(4.0f);
            cur_obj_set_model(MODEL_WATER_WHEEL);
            load_object_collision_model();
            rotating_water_wheel();
        break;
    }
    o->oInteractStatus = INT_STATUS_NONE;
}
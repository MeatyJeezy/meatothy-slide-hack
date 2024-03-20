static struct ObjectHitbox sLaunchBarrelHitbox = {
    /* interactType:      */ INTERACT_LAUNCH_BARREL,
    /* downOffset:        */ 0,
    /* damageOrCoinValue: */ 1,
    /* health:            */ 0,
    /* numLootCoins:      */ -1,
    /* radius:            */ 99,
    /* height:            */ 88,
    /* hurtboxRadius:     */ 0,
    /* hurtboxHeight:     */ 0,
};

// static u8 sLaunchBarrelAttackHandler[] = {
//     /* ATTACK_PUNCH:                 */ ATTACK_HANDLER_KNOCKBACK,
//     /* ATTACK_KICK_OR_TRIP:          */ ATTACK_HANDLER_KNOCKBACK,
//     /* ATTACK_FROM_ABOVE:            */ ATTACK_HANDLER_KNOCKBACK,
//     /* ATTACK_GROUND_POUND_OR_TWIRL: */ ATTACK_HANDLER_SQUISHED,
//     /* ATTACK_FAST_ATTACK:           */ ATTACK_HANDLER_KNOCKBACK,
//     /* ATTACK_FROM_BELOW:            */ ATTACK_HANDLER_KNOCKBACK,
// }

void barrel_act_idle() {
    if (o->oDistanceToMario < 500.0f) {
        cur_obj_become_tangible();
        cur_obj_enable_rendering();
        if (o->oInteractStatus & INT_STATUS_INTERACTED
         && (!(o->oInteractStatus & INT_STATUS_TOUCHED_BOB_OMB))) { // bob-omb explodes when it gets into a cannon
            o->oAction = 1;
            o->oTimer = 0;
        } else {
            o->oInteractStatus = INT_STATUS_NONE;
        }
    }
}

void barrel_act_ready(void) { // act 1 
    cur_obj_become_intangible();
    
    //cur_obj_disable_rendering();
    // Accelerate left and right. Maybe check behparam to see if it's the moving kind or which direction to move it?
    if (o->oTimer < 60 && o->oVelX < 0x100) {
        o->oVelX += 0x10;
    }
    else if (o->oTimer >= 60 && o->oTimer < 120 && o->oVelX > -0x100) {
        o->oVelX -= 0x10;
    }
    else {
        o->oTimer = 0;
    }

}

void barrel_act_shoot(void) { // act 2
    cur_obj_disable_rendering();
    o->oTimer = 0;
    o->oAction = 3;
}

void bhv_launch_barrel_init() {
    //Temp, will destroy barrel when used in final build
    if (o->oTimer++ > 30) {
        o->oAction = 0;
        o->oTimer = 0;
        cur_obj_enable_rendering();
        cur_obj_become_tangible();
        o->oInteractStatus = INT_STATUS_NONE;
    }
}

ObjActionFunc sLaunchBarrelActions[] = {
    barrel_act_idle,
    barrel_act_ready,
    barrel_act_shoot,
    bhv_launch_barrel_init,
};

void bhv_launch_barrel_loop() {
    //obj_set_hitbox(o, &sLaunchBarrelHitbox);
    cur_obj_call_action_function(sLaunchBarrelActions);
    obj_set_hitbox(o, &sLaunchBarrelHitbox);
    //o->oFaceAnglePitch += 0x100;
    //o->oInteractStatus = INT_STATUS_NONE;
}
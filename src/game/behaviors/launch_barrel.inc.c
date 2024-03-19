static struct ObjectHitbox sLaunchBarrelHitbox = {
    /* interactType:      */ INTERACT_DAMAGE,
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

void bhv_launch_barrel_init() {
    
}

void bhv_launch_barrel_loop() {
    //obj_set_hitbox(o, &sLaunchBarrelHitbox);
    obj_set_hitbox(o, &sLaunchBarrelHitbox);
    o->oFaceAngleRoll += 0x100;
    o->oInteractStatus = INT_STATUS_NONE;
}
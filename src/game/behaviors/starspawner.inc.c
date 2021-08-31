void bhv_star_spawner_init(void) {
    gMarioState->spawnCounter = 0;
}

void bhv_star_spawner_spawn_star(void) {
    spawn_default_star(o->oPosX, o->oPosY, o->oPosZ);
    spawn_mist_particles();
    o->activeFlags = ACTIVE_FLAG_DEACTIVATED;
}

void bhv_star_spawner_loop(void) {
    switch(gCurrLevelNum) {
        case LEVEL_JRB:
            if(gMarioState->spawnCounter == 6) {
                bhv_star_spawner_spawn_star();
            }
            break;
        case LEVEL_WF:
            if(gMarioState->spawnCounter == 1) {
                bhv_star_spawner_spawn_star();
            }
            break;
    }
}



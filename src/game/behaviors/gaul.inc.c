#include "include/point_lights.h"
void bhv_gaul_init(void) {
    Vec3f Angle;

    if(gCurrLevelNum == LEVEL_WF) {
        vec3f_set(Angle, DEGREES(45), DEGREES(0), DEGREES(-135));
        set_directional_light(Angle, 0, 0, 70);
    } else {
        vec3f_set(Angle, DEGREES(45), DEGREES(0), DEGREES(-135));
        set_directional_light(Angle, 255, 255, 255);
    }
    
}

void bhv_gaul_loop(void) {
    
    
}
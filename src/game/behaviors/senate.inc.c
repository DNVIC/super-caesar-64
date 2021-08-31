#include "include/point_lights.h"
void bhv_senate_init(void) {
    Vec3f Angle;
    switch(gCurrLevelNum) {
        
        case LEVEL_BOB:
                             //yaw       //roll      //pitch
            if(o->oBehParams2ndByte) {
                vec3f_set(Angle, DEGREES(45), DEGREES(0), DEGREES(-135));
                set_directional_light(Angle, 255, 105, 30);
            } else {
                vec3f_set(Angle, DEGREES(0), DEGREES(0), DEGREES(-180));
                set_directional_light(Angle, 255, 240, 235);
            }
            
            break;

    }
    
}

void bhv_senate_loop(void) {
    
    
}
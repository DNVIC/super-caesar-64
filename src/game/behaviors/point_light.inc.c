void bhv_point_light_loop(void) {
    Vec3f Pos;
    vec3f_set(Pos, (f32)o->oPosX, (f32)o->oPosY, (f32)o->oPosZ);
    
    s32 red = (o->oBehParams >> 24) & 0xFF;
    s32 blue = (o->oBehParams & 0x00FF0000) >> 16;
    s32 green = (o->oBehParams & 0x0000FF00) >> 8;

    u32 constant = (o->oBehParams & 0x000000E0); // constant falloff is first 3 bits
    u32 linear = (o->oBehParams & 0x0000001C); // linear falloff is bits 4-6
    u32 quadratic = (o->oBehParams & 0x00000003); // quadratic falloff is bits 7-8


    emit_light(Pos, red, blue, green, quadratic, linear, constant);
}
#include "objects.h"

extern GEOMETRY ball_geometry ={
    12,    /* numpoints */
    4,4,   /* sizex,sizey */
    {
    /* px[0,1,2 ...] */
    {0,1},{0,2},{1,0},{1,1},{1,2},{1,3},{2,0},{2,1},{2,2},{2,3},{3,1}, {3,2}
    }
};

extern OBJECT ballobject = {
    &ball_geometry, // geometry
    0,0,                // dirx, diry
    1,1,                // posx, posy
    0,
    draw_ballobject,
    clear_ballobject,
    move_ballobject,
    set_object_speed
};
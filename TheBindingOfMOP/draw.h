#ifndef DRAW_H
#define DRAW_H

/* ---- Display functions ---- */
void graphic_initalize(void);
 
void graphic_clear_screen(void);

void graphic_pixel_set(int, int);

void graphic_pixel_clear(int, int);

/* ---- Graphic structs ---- */
#define MAX_POINTS 25 // Max geometry size

typedef struct tPOINT{
    unsigned char x, y;
}POINT, *PPOINT;

typedef struct tGEOMETRY{
  int numpoints;
  int sizex;
  int sizey;
  POINT px[ MAX_POINTS ];
} GEOMETRY, *PGEOMETRY;
 
typedef struct tObj{
    PGEOMETRY geo;
    int dirx,diry;
    int posx,posy;
    int type;
    void (* draw ) (struct tObj *);
    void (* clear ) (struct tObj *);
    void (* move ) (struct tObj *);
    void (* set_speed ) (struct tObj *, int, int);
} OBJECT, *POBJECT;

/* ---- Graphic functions ---- */
void draw_ballobject(POBJECT);

void clear_ballobject(POBJECT);

void move_ballobject(POBJECT);
 
void set_object_speed(POBJECT, int, int);

#endif
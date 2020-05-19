#include "registers.h"
#include "draw.h"

/* ---- DISPLAY - General ---- */
__attribute__((naked))  
void graphic_initalize(void) 
{ 
	__asm volatile (" .HWORD  0xDFF0\n");
	__asm volatile (" BX LR\n"); 
}

__attribute__((naked))  
void graphic_clear_screen(void) 
{ 
	__asm volatile (" .HWORD  0xDFF1\n");
	__asm volatile (" BX LR\n"); 
}

__attribute__((naked)) 
void graphic_pixel_set( int x, int y) 
{
	__asm volatile (" .HWORD  0xDFF2\n"); 
	__asm volatile (" BX LR\n"); 
}

__attribute__((naked)) 
void graphic_pixel_clear( int x, int y) 
{ 
	__asm volatile (" .HWORD  0xDFF3\n");
	__asm volatile (" BX LR\n"); 
}

/* ---- GRAPHIC - Functions ---- */
// DRAW each pixel. Take the loop size from each objects' geometry numpoints
void draw_ballobject(POBJECT o){
    char numpoints = o->geo->numpoints;
    for (int i = 0; i < numpoints; i++){
        graphic_pixel_set( o->posx+o->geo->px[i].y , o->posy+o->geo->px[i].x);
    }
}

// CLEAR each pixel where the object is. Take the loop size from each objects' geometry numpoints
void clear_ballobject(POBJECT o){
    int numpoints = o->geo->numpoints;
    for (int i = 0; i < numpoints ; i++){
        graphic_pixel_clear( o->posx+o->geo->px[i].y , o->posy+o->geo->px[i].x);
    }
}

void move_ballobject(POBJECT o){
    clear_ballobject( o );
	// Create new local variables assigned with objects' xy positions for later usage
    short new_x = o->posx + o->dirx;
    short new_y = o->posy + o->diry;
    short new_dir_x = o->dirx;
    short new_dir_y = o->diry;
	
	if ( new_x < 1 ){                       // Left boundary
		new_dir_x = ((o->dirx) * -1);
		new_x = 1;
		
	}
	if ( (new_x + o->geo->sizex) > 128 ){   // Right boundary
		new_dir_x = ((o->dirx) * -1);
		new_x = 124;
		
	}
	if( new_y < 1 ){                       // Upper boundary
		new_dir_y = ((o->diry) * -1);
		new_y = 1;
	
	}
	if( (new_y + o->geo->sizey) > 64){     // Lower boundary
		new_dir_y = ((o->diry) * -1);
		new_y = 60;
	}
	
	// Assign the new object positions
    o->posx = new_x;
    o->posy = new_y;
    o->dirx = new_dir_x;
    o->diry = new_dir_y;
	
    draw_ballobject(o);  
}
 
void set_object_speed(POBJECT o, int speedx, int speedy){
    o->dirx = speedx;
    o->diry = speedy;
}
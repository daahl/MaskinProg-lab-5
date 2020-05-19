/*
 * startup.c
 * 
 * ~The Binding of MOP~
 *
 */
#include "registers.h"
#include "init.h"
#include "keypad.h"
#include "draw.h"
#include "objects.h"
 
__attribute__((naked)) __attribute__((section (".start_section")) )
void startup ( void )
{
__asm__ volatile(" LDR R0,=0x2001C000\n");		/* set stack */
__asm__ volatile(" MOV SP,R0\n");
__asm__ volatile(" BL main\n");					/* call main */
__asm__ volatile(".L1: B .L1\n");				/* never return */
}

void main(void)
{
	// Init
	appInit();
    graphic_initalize();
    graphic_clear_screen();
	
	POBJECT victim = &ballobject;
	
	victim->move( victim );
	
}


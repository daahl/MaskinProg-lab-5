#include "registers.h"

/* ---- Keypad variables ---- */
unsigned char KEYLIST[16] = {1, 2, 3, 0xA, 4, 5, 6, 0xB, 7, 8, 9, 0xC, 0xE, 0, 0xF, 0xD};                      // Keypad key values
unsigned char HEXLIST[16] = {0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x67,0x77,0x7C,0x39,0x5E,0x79,0x71}; // Segment values for 0-F (hex)

/* ---- Helper functions - KeyPad ---- */
/*
 *  Activates the given row, r, by editing the ODR.
 */
void kbActivateRow(unsigned char row){
    switch(row){
        case 1: *GPIO_D_ODR_HIGH = 0x10; break;
        case 2: *GPIO_D_ODR_HIGH = 0x20; break;
        case 3: *GPIO_D_ODR_HIGH = 0x40; break;
        case 4: *GPIO_D_ODR_HIGH = 0x80; break;
        default: *GPIO_D_ODR_HIGH = 0;
    }
}
 
/*
 * Returns which column is activated.
 */
unsigned char kbGetCol(void){
    unsigned char col = *GPIO_D_IDR_HIGH;
    if(col & 8) return 4;
    if(col & 4) return 3;
    if(col & 2) return 2;
    if(col & 1) return 1;
    return 0;
}
 
/*
 * Activate each row, one at a time,
 *  read each column,
 *  return the key value.
 */
unsigned char keyB(void){
    unsigned char keyValue = 0xFF; // Default value if no key is pressed
   
        for(unsigned char row = 1; row <= 4; row++){
            kbActivateRow(row);
            unsigned char col = kbGetCol();
           
            if(col){
                kbActivateRow(0); // Turn off all rows once a key has been pressed
                keyValue = KEYLIST[(4 * (row - 1)) + (col - 1)];
            }
        }
       
    return keyValue;
}
# include "registers.h"

void appInit(void){
    *GPIO_D_MODER       = 0x55005555;   // Pin D15-12 outports, D11-0 inports
    *GPIO_D_OTYPER      = 0x00;         // Push-pull on outpins
    *GPIO_D_PUPDR       = 0x00AA;       // Pull-down on inpins
    *GPIO_D_ODR_HIGH    = 0;            // Reset outpins to 0 at init
}
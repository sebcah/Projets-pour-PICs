#include <xc.h>
#include "pin_manager.h"

void PIN_MANAGER_Initialize(void) {
    LATA = 0x00;
    TRISA = 0xFF;
    ANSELA = 0x2F;

    LATB = 0x00;
    TRISB = 0xFE;
    ANSELB = 0x3E;
    WPUB = 0x00;

    LATC = 0x00;
    TRISC = 0xFF;
    ANSELC = 0xFC;

    LATD = 0x00;
    TRISD = 0xFF;
    ANSELD = 0xFF;

    LATE = 0x00;
    TRISE = 0x07;
    ANSELE = 0x07;

    INTCON2bits.nRBPU = 0x01;


}
/**
 End of File
 */
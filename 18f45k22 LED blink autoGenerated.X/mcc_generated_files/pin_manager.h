

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set LED aliases
#define LED_TRIS               TRISB0
#define LED_LAT                LATB0
#define LED_PORT               PORTBbits.RB0
#define LED_WPU                WPUB0
#define LED_ANS                ANSB0
#define LED_SetHigh()    do { LATB0 = 1; } while(0)
#define LED_SetLow()   do { LATB0 = 0; } while(0)
#define LED_Toggle()   do { LATB0 = ~LATB0; } while(0)
#define LED_GetValue()         PORTBbits.RB0
#define LED_SetDigitalInput()    do { TRISB0 = 1; } while(0)
#define LED_SetDigitalOutput()   do { TRISB0 = 0; } while(0)

#define LED_SetPullup()    do { WPUB0 = 1; } while(0)
#define LED_ResetPullup()   do { WPUB0 = 0; } while(0)
#define LED_SetAnalogMode()   do { ANSB0 = 1; } while(0)
#define LED_SetDigitalMode()   do { ANSB0 = 0; } while(0)

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    GPIO and peripheral I/O initialization
 * @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize(void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);

#endif // PIN_MANAGER_H
/**
 End of File
 */
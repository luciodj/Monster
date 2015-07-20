/*
 **  ping.c
 * 
 *  A simple way to capture the Parallax Ping *)) module output
 */
#include "ping.h"

// uses T1Gated mode to measure the echo pulse delay 

uint16_t PING_Pulse( void)
{
    T1G_SetHigh();                          // send a high pulse for 5us
    T1G_SetDigitalOutput();
    __delay_us( 5);
    T1G_SetDigitalInput();                  // return to input
    
    TMR1GIF = 0;                            
    TMR1 = 0;
    TMR1_StartSinglePulseAcquisition();
    while ( !TMR1GIF);
    return TMR1_ReadTimer();
}

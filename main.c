/*******************************************************************************
  Generated Main File 

  File Name:
    main.c

  Summary:
    This is the main file generated using MPLAB® Code Configurator

  *******************************************************************************/

#include <xc.h>
#include <string.h>
#include "MCC_Generated_Files/mcc.h"
#include "wave.h"
#include "ping.h"
#include "servo.h"

uint8_t Say( uint8_t i) {
    unsigned long lc;           // file length
    MFILE* fp;                  // file pointer
    char filename[] = "0.wav";

    if ( mount() == 0) 
        return FError;
    else {
        filename[0] = '0' + i;        // 0..9 A..Z
        if( ( fp = fopenM( filename, "r")) == NULL) 
            return 1;
        else {
            lc = InitWAV( fp);
            Play( fp, lc);
            fcloseM( fp);    
        }
    }
    return 0;
}


void main(void)
{
    SYSTEM_Initialize();
    INTERRUPT_PeripheralInterruptEnable();
    INTERRUPT_GlobalInterruptEnable();
    Say( 'A'-'0');   
    
    while  (1)  // main loop
    {
        uint16_t echo;
        echo = PING_Pulse() >> 10;      // ~ reduce to (0..9) dividing / 1024
        if (echo > 9)   echo = 9;
        LED0_LAT = Say( echo);
        Servo_DCSet( echo);
        __delay_ms( 250);            
        __delay_ms( 250);            

    } // while
} // main



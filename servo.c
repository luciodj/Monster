/*
 **   Servo.c
 */
#include "servo.h"
#include "mcc_generated_files/mcc.h"

static uint8_t dcMaster = DCMAX;   // start full open

/** 
 called inside the TMR2 interrupt at 44100 to generate a soft PWM
 */
void Servo_PWM( void)
{
    static uint8_t tmrServo = 0;
    static uint8_t dcServo = DCMAX;
    
    if ( tmrServo == 0) {
        dcServo = dcMaster;
        SERVO_SetHigh();
    }
    if (tmrServo == dcServo) 
        SERVO_SetLow();
    tmrServo++;
}

void Servo_DCSet( uint8_t dc)
{
    dcMaster = DCMIN + DCSTEP * dc ;
}


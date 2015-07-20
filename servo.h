/*
 **   Servo.h
 *   
 *   Software PWM based on the WAV player (44100Hz) time base 
 */

#include "mcc_generated_files/mcc.h"

#define TICK    1000000L / 44100 // approx 22.5us
#define DCMIN   17     // 0.4ms
#define DCMAX   44     // 1.0ms  limit max to 90 deg 50% DC
#define DCSTEP   3

void Servo_PWM( void);
void Servo_DCSet( uint8_t dc);

/*
 *  ping.h
 * 
 *  A simple way to capture the Parallax Ping *)) module output
 */
#include "mcc_generated_files/mcc.h"

#define T1CLK   _XTAL_FREQ / 4

uint16_t PING_Pulse();


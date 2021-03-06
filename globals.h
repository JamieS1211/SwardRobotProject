/*
 * File:   globals.h
 * Author: Jamie
 *
 * Created on 29 March 2019, 15:52
 */

#ifndef GLOBALS_H
#define GLOBALS_H

#include <stdint.h>
#include <stdbool.h>

//Definitions for motor management
#define enableLeft LATBbits.LB7
#define leftForwards LATBbits.LB6
#define leftBackwards LATBbits.LB5
#define rightForwards LATBbits.LB4
#define rightBackwards LATBbits.LB3
#define enableRight LATBbits.LB2

//Definitions for SPI data communication
#define SCK LATAbits.LA0
#define SDO LATAbits.LA1
#define SDI PORTAbits.RA2
#define CSCON LATAbits.LA3
#define CSDAT LATAbits.LA4
#define IRQ1 PORTAbits.RA5

//Global variables for direction decisions
volatile unsigned int direction = 0;
volatile unsigned int directionChangeCounter = 0;

#endif //GLOBALS_H
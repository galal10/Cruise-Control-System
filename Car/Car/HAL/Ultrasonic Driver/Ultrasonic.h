

#ifndef ULTRASONIC_H_
#define ULTRASONIC_H_

#include "../../MCAL/DIO Driver/DIO.h"
#include "../../MCAL/Timers Drivers/Timer2 Driver/timer2.h"
#include "../../Utilites/BitMath.h"
#include "../../Utilites/DataTypes.h"
#include "../../MCAL/Interrupt Driver/INTERRUPT.h"
#include "../Motor Driver/Motor.h"

#define ULTRASONIC_PORT PORT_D
#define ULTRASONIC_TRIGGER_PIN PIN6
#define ULTRASONIC_ECHO_PIN PIN3

#define F_CPU 8000000UL

extern u32_t distance;

/*
Function to initialization the Ultrasonic
Input : void
return ERROR or OK
*/
EN_ERRORSTATE_t Ultrasonic_init(void);


/*
Function to get reading of Ultrasonic "Distance
Input : void
output : reading value
return ERROR or OK
*/
EN_ERRORSTATE_t Ultrasonic_getReading(void);


/*
Function to Data send UART to LCD as string
Input : void
output : String
return ERROR or OK
*/

extern EN_ERRORSTATE_t Ultrasonic_CarSpeed(u32_t Distance);




#endif /* ULTRASONIC_H_ */
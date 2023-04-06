/*******************************************************************************
  Stepper Motor System Definitions

  File Name:
    stepper.h

  Summary:
    Header file which shares global variables and function prototypes.

  Description:
    This file contains the global variables and function prototypes for a stepper motor control project.

 *******************************************************************************/
#ifndef STEPPER_H
#define STEPPER_H

/*******************************************************************************
Header Inclusions
*******************************************************************************/
#include <Arduino.h>

/*******************************************************************************
Constant variables
*******************************************************************************/
#define DIR_PIN                 32      //GPIO Pin 32 of ESP32 connect to positive pin of direction (DIR+ of S4D motor driver) for example
#define STEP_PIN                33      //GPIO Pin 33 of ESP32 connect to positive side of pulse/step direction (PULSE+ of S4D motor driver) for example

#define COUNTER_CLOCK_WISE      0       
#define CLOCK_WISE              1
#define BOTH_DIRECTION

#define RUN_STEPPER             1
#define STOP_STEPPER            0

#define true                    1
#define false                   0

/*******************************************************************************
typdefs
*******************************************************************************/
typedef struct
{
    bool set_motor;         //motor condition set by the user through display, 0 - OFF, 1 - ON
    bool set_dir;           //motor direction set by the user through display, 1 - clock wise, 0 - counter clock wise

    uint8_t set_dir_mode;   //mode of the direction set by the user, 0/1 - one direction, 2-both direction

    uint set_speed;         //speed set by the user

    bool status_motor;      //status of the motor,0-stop, 1-running
    bool status_dir;        //status of current direction of the motor, 1-clock, 0-counter clock

}stepper;


/*******************************************************************************
Function prototypes
*******************************************************************************/
void Stepper_Init(void);

void motor_run(void);

void stepper_motor_start(void);
void stepper_motor_stop(void);

#endif  //STEPPER_H
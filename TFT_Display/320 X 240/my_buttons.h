/*******************************************************************************
  System Definitions

  File Name:
    my_buttons.h

  Summary:
    Header file which shares global variables and function prototypes.

  Description:
    This file contains the global variables and function prototypes for a buttons.

 *******************************************************************************/

// ensure this library description is only included once
#ifndef MY_BUTTONS_H
#define MY_BUTTONS_H

/*******************************************************************************
Header Inclusions
*******************************************************************************/
#include <Arduino.h>
#include <TFT_eSPI.h>               // Hardware-specific library
#include <TFT_eWidget.h>            // Widget library

/*******************************************************************************
Function prototypes
*******************************************************************************/
void Buttons_Init(void);

void Buttons_Create(void);

#endif  //MY_BUTTONS_H
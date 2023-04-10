/*******************************************************************************
  TFT Buttons Source file 

  Company:
    Whizdata Solutions LLP.

  File Name:
    my_buttons.cpp

  Summary:
    This file contains all the functions related to TFT buttons control

  Description:
    This file contains implementation of the display
 
 *******************************************************************************/

/*******************************************************************************
Header Inclusions
*******************************************************************************/
#include <my_buttons.h>
#include <tft_display.h>

/*******************************************************************************
Functions
*******************************************************************************/

/******************************************************************************
Function:     Buttons_Init
Description:  TFT buttons initialization and creation
Input:        nothing (uses some global variables)
Output:       nothing (modifies some global variables)            
******************************************************************************/
void Buttons_Init(void)
{
  Buttons_Create();
}

/******************************************************************************
Function:     Buttons_Create
Description:  TFT buttons creation
Input:        nothing (uses some global variables)
Output:       nothing (modifies some global variables)
******************************************************************************/
void Buttons_Create(void)
{
  ButtonWidget Start_Stop_Butn = ButtonWidget(&tft);
  ButtonWidget Clock_Butn = ButtonWidget(&tft);
  ButtonWidget Counter_Clock_Butn = ButtonWidget(&tft);
}
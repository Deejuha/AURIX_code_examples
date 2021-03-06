/**********************************************************************************************************************
 * \file Blinky_LED.c
 * \copyright Copyright (C) Infineon Technologies AG 2019
 *
 * Use of this file is subject to the terms of use agreed between (i) you or the company in which ordinary course of
 * business you are acting and (ii) Infineon Technologies AG or its licensees. If and as long as no such terms of use
 * are agreed, use of this file is subject to following:
 *
 * Boost Software License - Version 1.0 - August 17th, 2003
 *
 * Permission is hereby granted, free of charge, to any person or organization obtaining a copy of the software and
 * accompanying documentation covered by this license (the "Software") to use, reproduce, display, distribute, execute,
 * and transmit the Software, and to prepare derivative works of the Software, and to permit third-parties to whom the
 * Software is furnished to do so, all subject to the following:
 *
 * The copyright notices in the Software and this entire statement, including the above license grant, this restriction
 * and the following disclaimer, must be included in all copies of the Software, in whole or in part, and all
 * derivative works of the Software, unless such copies or derivative works are solely in the form of
 * machine-executable object code generated by a source language processor.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
 * WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT SHALL THE
 * COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN
 * CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 *********************************************************************************************************************/

/*********************************************************************************************************************/
/*-----------------------------------------------------Includes------------------------------------------------------*/
/*********************************************************************************************************************/
#include "IfxPort.h"
#include "Bsp.h"
#include <stdint.h>

/*********************************************************************************************************************/
/*------------------------------------------------------Macros-------------------------------------------------------*/
/*********************************************************************************************************************/
#define LED1        &MODULE_P33,4
#define LED2        &MODULE_P33,5
#define LED3        &MODULE_P33,6
#define LED4        &MODULE_P33,7
#define LED5        &MODULE_P20,11
#define LED6        &MODULE_P20,12
#define LED7        &MODULE_P20,13
#define LED8        &MODULE_P20,14

#define WAIT_TIME   (5 * TimeConst_100ms)   /* Wait time constant in milliseconds   */

/*********************************************************************************************************************/
/*-----------------------------------------------Global variables----------------------------------------------------*/
/*********************************************************************************************************************/
int8_t some_int8_var = 123;
int16_t some_int16_var = 123;
int32_t some_int32_var = 123;
uint8_t some_uint8_var = 123;
uint16_t some_uint16_var = 123;
uint32_t some_uint32_var = 123;


/*********************************************************************************************************************/
/*---------------------------------------------Function Implementations----------------------------------------------*/
/*********************************************************************************************************************/
/* This function initializes the port pin which drives the LED */
void initLED(void)
{
    /* Initialization of the LED used in this example */
    IfxPort_setPinModeOutput(LED1, IfxPort_OutputMode_pushPull, IfxPort_OutputIdx_general);
    IfxPort_setPinModeOutput(LED2, IfxPort_OutputMode_pushPull, IfxPort_OutputIdx_general);
    IfxPort_setPinModeOutput(LED3, IfxPort_OutputMode_pushPull, IfxPort_OutputIdx_general);
    IfxPort_setPinModeOutput(LED4, IfxPort_OutputMode_pushPull, IfxPort_OutputIdx_general);
    IfxPort_setPinModeOutput(LED5, IfxPort_OutputMode_pushPull, IfxPort_OutputIdx_general);
    IfxPort_setPinModeOutput(LED6, IfxPort_OutputMode_pushPull, IfxPort_OutputIdx_general);
    IfxPort_setPinModeOutput(LED7, IfxPort_OutputMode_pushPull, IfxPort_OutputIdx_general);
    IfxPort_setPinModeOutput(LED8, IfxPort_OutputMode_pushPull, IfxPort_OutputIdx_general);

    /* Switch OFF the LED (low-level active) */
    IfxPort_setPinHigh(LED1);
    IfxPort_setPinHigh(LED2);
    IfxPort_setPinHigh(LED3);
    IfxPort_setPinHigh(LED4);
    IfxPort_setPinHigh(LED5);
    IfxPort_setPinHigh(LED6);
    IfxPort_setPinHigh(LED7);
    IfxPort_setPinHigh(LED8);
}

/* This function toggles the port pin and wait 500 milliseconds */
void blinkLED(void)
{
    IfxPort_togglePin(LED1);
    IfxPort_togglePin(LED2);
    IfxPort_togglePin(LED3);
    IfxPort_togglePin(LED4);
    IfxPort_togglePin(LED5);
    IfxPort_togglePin(LED6);
    IfxPort_togglePin(LED7);
    IfxPort_togglePin(LED8);

    waitTime(WAIT_TIME);                    /* Wait 500 milliseconds                */
}

void increment_variables(void)
{   
    some_int8_var++;
    some_int16_var++;
    some_int32_var++;
    some_uint8_var++;
    some_uint16_var++;
    some_uint32_var++;
}


//*****************************************************************************
// Copyright (c) 2014 Texas Instruments Incorporated.  All rights reserved.
// Software License Agreement
// 
//   Redistribution and use in source and binary forms, with or without
//   modification, are permitted provided that the following conditions
//   are met:
// 
//   Redistributions of source code must retain the above copyright
//   notice, this list of conditions and the following disclaimer.
// 
//   Redistributions in binary form must reproduce the above copyright
//   notice, this list of conditions and the following disclaimer in the
//   documentation and/or other materials provided with the  
//   distribution.
// 
//   Neither the name of Texas Instruments Incorporated nor the names of
//   its contributors may be used to endorse or promote products derived
//   from this software without specific prior written permission.
// 
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
// This file was automatically generated by the Tiva C Series PinMux Utility
// Version: 1.0.4
//
//*****************************************************************************

#include <stdint.h>
#include <stdbool.h>
#include "pinmux.h"
#include "inc/hw_types.h"
#include "inc/hw_memmap.h"
#include "inc/hw_gpio.h"
#include "driverlib/sysctl.h"
#include "driverlib/pin_map.h"
#include "driverlib/gpio.h"

//*****************************************************************************
void
PortFunctionInit(void)
{
    //
    // Enable Peripheral Clocks 
    //
    SysCtlPeripheralEnable(SYSCTL_PERIPH_SSI0);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_I2C1);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_UART0);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_USB0);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_I2C0);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOA);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOB);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOC);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOD);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOE);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOF);

    //
    // Enable pin PC6 for GPIOInput
    //
    GPIOPinTypeGPIOInput(GPIO_PORTC_BASE, GPIO_PIN_6);

    //
    // Enable pin PC5 for GPIOOutput
    //
    GPIOPinTypeGPIOOutput(GPIO_PORTC_BASE, GPIO_PIN_5);

    //
    // Enable pin PC7 for GPIOInput
    //
    GPIOPinTypeGPIOInput(GPIO_PORTC_BASE, GPIO_PIN_7);

    //
    // Enable pin PC4 for GPIOOutput
    //
    GPIOPinTypeGPIOOutput(GPIO_PORTC_BASE, GPIO_PIN_4);

    //
    // Enable pin PD3 for GPIOInput
    //
    GPIOPinTypeGPIOInput(GPIO_PORTD_BASE, GPIO_PIN_3);

    //
    // Enable pin PD0 for GPIOOutput
    //
    GPIOPinTypeGPIOOutput(GPIO_PORTD_BASE, GPIO_PIN_0);

    //
    // Enable pin PD2 for GPIOInput
    //
    GPIOPinTypeGPIOInput(GPIO_PORTD_BASE, GPIO_PIN_2);

    //
    // Enable pin PD1 for GPIOInput
    //
    GPIOPinTypeGPIOInput(GPIO_PORTD_BASE, GPIO_PIN_1);

    //
    // Enable pin PE3 for GPIOInput
    //
    GPIOPinTypeGPIOInput(GPIO_PORTE_BASE, GPIO_PIN_3);

    //
    // Enable pin PE0 for GPIOInput
    //
    GPIOPinTypeGPIOInput(GPIO_PORTE_BASE, GPIO_PIN_0);

    //
    // Enable pin PE2 for GPIOInput
    //
    GPIOPinTypeGPIOInput(GPIO_PORTE_BASE, GPIO_PIN_2);

    //
    // Enable pin PE1 for GPIOInput
    //
    GPIOPinTypeGPIOInput(GPIO_PORTE_BASE, GPIO_PIN_1);

    //
    // Enable pin PF3 for GPIOInput
    //
    GPIOPinTypeGPIOInput(GPIO_PORTF_BASE, GPIO_PIN_3);

    //
    // Enable pin PF2 for GPIOInput
    //
    GPIOPinTypeGPIOInput(GPIO_PORTF_BASE, GPIO_PIN_2);

    //
    // Enable pin PF1 for GPIOInput
    //
    GPIOPinTypeGPIOInput(GPIO_PORTF_BASE, GPIO_PIN_1);

    //
    // Enable pin PF4 for GPIOInput
    //
    GPIOPinTypeGPIOInput(GPIO_PORTF_BASE, GPIO_PIN_4);

    //
    // Enable pin PB2 for I2C0 I2C0SCL
    //
    GPIOPinConfigure(GPIO_PB2_I2C0SCL);
    GPIOPinTypeI2CSCL(GPIO_PORTB_BASE, GPIO_PIN_2);

    //
    // Enable pin PB3 for I2C0 I2C0SDA
    //
    GPIOPinConfigure(GPIO_PB3_I2C0SDA);
    GPIOPinTypeI2C(GPIO_PORTB_BASE, GPIO_PIN_3);

    //
    // Enable pin PA7 for I2C1 I2C1SDA
    //
    GPIOPinConfigure(GPIO_PA7_I2C1SDA);
    GPIOPinTypeI2C(GPIO_PORTA_BASE, GPIO_PIN_7);

    //
    // Enable pin PA6 for I2C1 I2C1SCL
    //
    GPIOPinConfigure(GPIO_PA6_I2C1SCL);
    GPIOPinTypeI2CSCL(GPIO_PORTA_BASE, GPIO_PIN_6);

    //
    // Enable pin PA2 for SSI0 SSI0CLK
    //
    GPIOPinConfigure(GPIO_PA2_SSI0CLK);
    GPIOPinTypeSSI(GPIO_PORTA_BASE, GPIO_PIN_2);

    //
    // Enable pin PA4 for SSI0 SSI0RX
    //
    GPIOPinConfigure(GPIO_PA4_SSI0RX);
    GPIOPinTypeSSI(GPIO_PORTA_BASE, GPIO_PIN_4);

    //
    // Enable pin PA5 for SSI0 SSI0TX
    //
    GPIOPinConfigure(GPIO_PA5_SSI0TX);
    GPIOPinTypeSSI(GPIO_PORTA_BASE, GPIO_PIN_5);

    //
    // Enable pin PA3 for SSI0 SSI0FSS
    //
    GPIOPinConfigure(GPIO_PA3_SSI0FSS);
    GPIOPinTypeSSI(GPIO_PORTA_BASE, GPIO_PIN_3);

    //
    // Enable pin PA1 for UART0 U0TX
    //
    GPIOPinConfigure(GPIO_PA1_U0TX);
    GPIOPinTypeUART(GPIO_PORTA_BASE, GPIO_PIN_1);

    //
    // Enable pin PA0 for UART0 U0RX
    //
    GPIOPinConfigure(GPIO_PA0_U0RX);
    GPIOPinTypeUART(GPIO_PORTA_BASE, GPIO_PIN_0);

    //
    // Enable pin PB1 for USB0 USB0VBUS
    //
    GPIOPinTypeUSBAnalog(GPIO_PORTB_BASE, GPIO_PIN_1);

    //
    // Enable pin PD5 for USB0 USB0DP
    //
    GPIOPinTypeUSBAnalog(GPIO_PORTD_BASE, GPIO_PIN_5);

    //
    // Enable pin PD4 for USB0 USB0DM
    //
    GPIOPinTypeUSBAnalog(GPIO_PORTD_BASE, GPIO_PIN_4);
}

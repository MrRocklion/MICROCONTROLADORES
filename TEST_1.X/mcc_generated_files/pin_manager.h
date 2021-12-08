/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC16F18875
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.31 and above
        MPLAB 	          :  MPLAB X 5.45	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set IO_RA0 aliases
#define IO_RA0_TRIS                 TRISAbits.TRISA0
#define IO_RA0_LAT                  LATAbits.LATA0
#define IO_RA0_PORT                 PORTAbits.RA0
#define IO_RA0_WPU                  WPUAbits.WPUA0
#define IO_RA0_OD                   ODCONAbits.ODCA0
#define IO_RA0_ANS                  ANSELAbits.ANSA0
#define IO_RA0_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define IO_RA0_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define IO_RA0_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define IO_RA0_GetValue()           PORTAbits.RA0
#define IO_RA0_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define IO_RA0_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define IO_RA0_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define IO_RA0_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define IO_RA0_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define IO_RA0_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define IO_RA0_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define IO_RA0_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set IO_RA1 aliases
#define IO_RA1_TRIS                 TRISAbits.TRISA1
#define IO_RA1_LAT                  LATAbits.LATA1
#define IO_RA1_PORT                 PORTAbits.RA1
#define IO_RA1_WPU                  WPUAbits.WPUA1
#define IO_RA1_OD                   ODCONAbits.ODCA1
#define IO_RA1_ANS                  ANSELAbits.ANSA1
#define IO_RA1_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define IO_RA1_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define IO_RA1_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define IO_RA1_GetValue()           PORTAbits.RA1
#define IO_RA1_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define IO_RA1_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define IO_RA1_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define IO_RA1_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define IO_RA1_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define IO_RA1_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define IO_RA1_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define IO_RA1_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set IO_RA2 aliases
#define IO_RA2_TRIS                 TRISAbits.TRISA2
#define IO_RA2_LAT                  LATAbits.LATA2
#define IO_RA2_PORT                 PORTAbits.RA2
#define IO_RA2_WPU                  WPUAbits.WPUA2
#define IO_RA2_OD                   ODCONAbits.ODCA2
#define IO_RA2_ANS                  ANSELAbits.ANSA2
#define IO_RA2_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define IO_RA2_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define IO_RA2_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define IO_RA2_GetValue()           PORTAbits.RA2
#define IO_RA2_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define IO_RA2_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define IO_RA2_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define IO_RA2_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define IO_RA2_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define IO_RA2_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define IO_RA2_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define IO_RA2_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set B0 aliases
#define B0_TRIS                 TRISBbits.TRISB0
#define B0_LAT                  LATBbits.LATB0
#define B0_PORT                 PORTBbits.RB0
#define B0_WPU                  WPUBbits.WPUB0
#define B0_OD                   ODCONBbits.ODCB0
#define B0_ANS                  ANSELBbits.ANSB0
#define B0_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define B0_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define B0_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define B0_GetValue()           PORTBbits.RB0
#define B0_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define B0_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define B0_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define B0_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define B0_SetPushPull()        do { ODCONBbits.ODCB0 = 0; } while(0)
#define B0_SetOpenDrain()       do { ODCONBbits.ODCB0 = 1; } while(0)
#define B0_SetAnalogMode()      do { ANSELBbits.ANSB0 = 1; } while(0)
#define B0_SetDigitalMode()     do { ANSELBbits.ANSB0 = 0; } while(0)

// get/set B1 aliases
#define B1_TRIS                 TRISBbits.TRISB1
#define B1_LAT                  LATBbits.LATB1
#define B1_PORT                 PORTBbits.RB1
#define B1_WPU                  WPUBbits.WPUB1
#define B1_OD                   ODCONBbits.ODCB1
#define B1_ANS                  ANSELBbits.ANSB1
#define B1_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define B1_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define B1_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define B1_GetValue()           PORTBbits.RB1
#define B1_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define B1_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define B1_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define B1_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define B1_SetPushPull()        do { ODCONBbits.ODCB1 = 0; } while(0)
#define B1_SetOpenDrain()       do { ODCONBbits.ODCB1 = 1; } while(0)
#define B1_SetAnalogMode()      do { ANSELBbits.ANSB1 = 1; } while(0)
#define B1_SetDigitalMode()     do { ANSELBbits.ANSB1 = 0; } while(0)

// get/set B2 aliases
#define B2_TRIS                 TRISBbits.TRISB2
#define B2_LAT                  LATBbits.LATB2
#define B2_PORT                 PORTBbits.RB2
#define B2_WPU                  WPUBbits.WPUB2
#define B2_OD                   ODCONBbits.ODCB2
#define B2_ANS                  ANSELBbits.ANSB2
#define B2_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define B2_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define B2_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define B2_GetValue()           PORTBbits.RB2
#define B2_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define B2_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define B2_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define B2_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define B2_SetPushPull()        do { ODCONBbits.ODCB2 = 0; } while(0)
#define B2_SetOpenDrain()       do { ODCONBbits.ODCB2 = 1; } while(0)
#define B2_SetAnalogMode()      do { ANSELBbits.ANSB2 = 1; } while(0)
#define B2_SetDigitalMode()     do { ANSELBbits.ANSB2 = 0; } while(0)

// get/set B3 aliases
#define B3_TRIS                 TRISBbits.TRISB3
#define B3_LAT                  LATBbits.LATB3
#define B3_PORT                 PORTBbits.RB3
#define B3_WPU                  WPUBbits.WPUB3
#define B3_OD                   ODCONBbits.ODCB3
#define B3_ANS                  ANSELBbits.ANSB3
#define B3_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define B3_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define B3_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define B3_GetValue()           PORTBbits.RB3
#define B3_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define B3_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define B3_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define B3_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define B3_SetPushPull()        do { ODCONBbits.ODCB3 = 0; } while(0)
#define B3_SetOpenDrain()       do { ODCONBbits.ODCB3 = 1; } while(0)
#define B3_SetAnalogMode()      do { ANSELBbits.ANSB3 = 1; } while(0)
#define B3_SetDigitalMode()     do { ANSELBbits.ANSB3 = 0; } while(0)

// get/set IO_RB4 aliases
#define IO_RB4_TRIS                 TRISBbits.TRISB4
#define IO_RB4_LAT                  LATBbits.LATB4
#define IO_RB4_PORT                 PORTBbits.RB4
#define IO_RB4_WPU                  WPUBbits.WPUB4
#define IO_RB4_OD                   ODCONBbits.ODCB4
#define IO_RB4_ANS                  ANSELBbits.ANSB4
#define IO_RB4_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define IO_RB4_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define IO_RB4_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define IO_RB4_GetValue()           PORTBbits.RB4
#define IO_RB4_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define IO_RB4_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define IO_RB4_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define IO_RB4_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define IO_RB4_SetPushPull()        do { ODCONBbits.ODCB4 = 0; } while(0)
#define IO_RB4_SetOpenDrain()       do { ODCONBbits.ODCB4 = 1; } while(0)
#define IO_RB4_SetAnalogMode()      do { ANSELBbits.ANSB4 = 1; } while(0)
#define IO_RB4_SetDigitalMode()     do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set IO_RB5 aliases
#define IO_RB5_TRIS                 TRISBbits.TRISB5
#define IO_RB5_LAT                  LATBbits.LATB5
#define IO_RB5_PORT                 PORTBbits.RB5
#define IO_RB5_WPU                  WPUBbits.WPUB5
#define IO_RB5_OD                   ODCONBbits.ODCB5
#define IO_RB5_ANS                  ANSELBbits.ANSB5
#define IO_RB5_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define IO_RB5_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define IO_RB5_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define IO_RB5_GetValue()           PORTBbits.RB5
#define IO_RB5_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define IO_RB5_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define IO_RB5_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define IO_RB5_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define IO_RB5_SetPushPull()        do { ODCONBbits.ODCB5 = 0; } while(0)
#define IO_RB5_SetOpenDrain()       do { ODCONBbits.ODCB5 = 1; } while(0)
#define IO_RB5_SetAnalogMode()      do { ANSELBbits.ANSB5 = 1; } while(0)
#define IO_RB5_SetDigitalMode()     do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set IO_RB6 aliases
#define IO_RB6_TRIS                 TRISBbits.TRISB6
#define IO_RB6_LAT                  LATBbits.LATB6
#define IO_RB6_PORT                 PORTBbits.RB6
#define IO_RB6_WPU                  WPUBbits.WPUB6
#define IO_RB6_OD                   ODCONBbits.ODCB6
#define IO_RB6_ANS                  ANSELBbits.ANSB6
#define IO_RB6_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define IO_RB6_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define IO_RB6_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define IO_RB6_GetValue()           PORTBbits.RB6
#define IO_RB6_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define IO_RB6_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define IO_RB6_SetPullup()          do { WPUBbits.WPUB6 = 1; } while(0)
#define IO_RB6_ResetPullup()        do { WPUBbits.WPUB6 = 0; } while(0)
#define IO_RB6_SetPushPull()        do { ODCONBbits.ODCB6 = 0; } while(0)
#define IO_RB6_SetOpenDrain()       do { ODCONBbits.ODCB6 = 1; } while(0)
#define IO_RB6_SetAnalogMode()      do { ANSELBbits.ANSB6 = 1; } while(0)
#define IO_RB6_SetDigitalMode()     do { ANSELBbits.ANSB6 = 0; } while(0)

// get/set IO_RB7 aliases
#define IO_RB7_TRIS                 TRISBbits.TRISB7
#define IO_RB7_LAT                  LATBbits.LATB7
#define IO_RB7_PORT                 PORTBbits.RB7
#define IO_RB7_WPU                  WPUBbits.WPUB7
#define IO_RB7_OD                   ODCONBbits.ODCB7
#define IO_RB7_ANS                  ANSELBbits.ANSB7
#define IO_RB7_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define IO_RB7_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define IO_RB7_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define IO_RB7_GetValue()           PORTBbits.RB7
#define IO_RB7_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define IO_RB7_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define IO_RB7_SetPullup()          do { WPUBbits.WPUB7 = 1; } while(0)
#define IO_RB7_ResetPullup()        do { WPUBbits.WPUB7 = 0; } while(0)
#define IO_RB7_SetPushPull()        do { ODCONBbits.ODCB7 = 0; } while(0)
#define IO_RB7_SetOpenDrain()       do { ODCONBbits.ODCB7 = 1; } while(0)
#define IO_RB7_SetAnalogMode()      do { ANSELBbits.ANSB7 = 1; } while(0)
#define IO_RB7_SetDigitalMode()     do { ANSELBbits.ANSB7 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/
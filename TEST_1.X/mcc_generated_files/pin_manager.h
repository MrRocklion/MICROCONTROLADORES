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

// get/set SW_1 aliases
#define SW_1_TRIS                 TRISAbits.TRISA0
#define SW_1_LAT                  LATAbits.LATA0
#define SW_1_PORT                 PORTAbits.RA0
#define SW_1_WPU                  WPUAbits.WPUA0
#define SW_1_OD                   ODCONAbits.ODCA0
#define SW_1_ANS                  ANSELAbits.ANSA0
#define SW_1_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define SW_1_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define SW_1_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define SW_1_GetValue()           PORTAbits.RA0
#define SW_1_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define SW_1_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define SW_1_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define SW_1_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define SW_1_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define SW_1_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define SW_1_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define SW_1_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set SW_2 aliases
#define SW_2_TRIS                 TRISAbits.TRISA1
#define SW_2_LAT                  LATAbits.LATA1
#define SW_2_PORT                 PORTAbits.RA1
#define SW_2_WPU                  WPUAbits.WPUA1
#define SW_2_OD                   ODCONAbits.ODCA1
#define SW_2_ANS                  ANSELAbits.ANSA1
#define SW_2_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define SW_2_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define SW_2_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define SW_2_GetValue()           PORTAbits.RA1
#define SW_2_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define SW_2_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define SW_2_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define SW_2_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define SW_2_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define SW_2_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define SW_2_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define SW_2_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)

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

// get/set D0 aliases
#define D0_TRIS                 TRISDbits.TRISD0
#define D0_LAT                  LATDbits.LATD0
#define D0_PORT                 PORTDbits.RD0
#define D0_WPU                  WPUDbits.WPUD0
#define D0_OD                   ODCONDbits.ODCD0
#define D0_ANS                  ANSELDbits.ANSD0
#define D0_SetHigh()            do { LATDbits.LATD0 = 1; } while(0)
#define D0_SetLow()             do { LATDbits.LATD0 = 0; } while(0)
#define D0_Toggle()             do { LATDbits.LATD0 = ~LATDbits.LATD0; } while(0)
#define D0_GetValue()           PORTDbits.RD0
#define D0_SetDigitalInput()    do { TRISDbits.TRISD0 = 1; } while(0)
#define D0_SetDigitalOutput()   do { TRISDbits.TRISD0 = 0; } while(0)
#define D0_SetPullup()          do { WPUDbits.WPUD0 = 1; } while(0)
#define D0_ResetPullup()        do { WPUDbits.WPUD0 = 0; } while(0)
#define D0_SetPushPull()        do { ODCONDbits.ODCD0 = 0; } while(0)
#define D0_SetOpenDrain()       do { ODCONDbits.ODCD0 = 1; } while(0)
#define D0_SetAnalogMode()      do { ANSELDbits.ANSD0 = 1; } while(0)
#define D0_SetDigitalMode()     do { ANSELDbits.ANSD0 = 0; } while(0)

// get/set D1 aliases
#define D1_TRIS                 TRISDbits.TRISD1
#define D1_LAT                  LATDbits.LATD1
#define D1_PORT                 PORTDbits.RD1
#define D1_WPU                  WPUDbits.WPUD1
#define D1_OD                   ODCONDbits.ODCD1
#define D1_ANS                  ANSELDbits.ANSD1
#define D1_SetHigh()            do { LATDbits.LATD1 = 1; } while(0)
#define D1_SetLow()             do { LATDbits.LATD1 = 0; } while(0)
#define D1_Toggle()             do { LATDbits.LATD1 = ~LATDbits.LATD1; } while(0)
#define D1_GetValue()           PORTDbits.RD1
#define D1_SetDigitalInput()    do { TRISDbits.TRISD1 = 1; } while(0)
#define D1_SetDigitalOutput()   do { TRISDbits.TRISD1 = 0; } while(0)
#define D1_SetPullup()          do { WPUDbits.WPUD1 = 1; } while(0)
#define D1_ResetPullup()        do { WPUDbits.WPUD1 = 0; } while(0)
#define D1_SetPushPull()        do { ODCONDbits.ODCD1 = 0; } while(0)
#define D1_SetOpenDrain()       do { ODCONDbits.ODCD1 = 1; } while(0)
#define D1_SetAnalogMode()      do { ANSELDbits.ANSD1 = 1; } while(0)
#define D1_SetDigitalMode()     do { ANSELDbits.ANSD1 = 0; } while(0)

// get/set D2 aliases
#define D2_TRIS                 TRISDbits.TRISD2
#define D2_LAT                  LATDbits.LATD2
#define D2_PORT                 PORTDbits.RD2
#define D2_WPU                  WPUDbits.WPUD2
#define D2_OD                   ODCONDbits.ODCD2
#define D2_ANS                  ANSELDbits.ANSD2
#define D2_SetHigh()            do { LATDbits.LATD2 = 1; } while(0)
#define D2_SetLow()             do { LATDbits.LATD2 = 0; } while(0)
#define D2_Toggle()             do { LATDbits.LATD2 = ~LATDbits.LATD2; } while(0)
#define D2_GetValue()           PORTDbits.RD2
#define D2_SetDigitalInput()    do { TRISDbits.TRISD2 = 1; } while(0)
#define D2_SetDigitalOutput()   do { TRISDbits.TRISD2 = 0; } while(0)
#define D2_SetPullup()          do { WPUDbits.WPUD2 = 1; } while(0)
#define D2_ResetPullup()        do { WPUDbits.WPUD2 = 0; } while(0)
#define D2_SetPushPull()        do { ODCONDbits.ODCD2 = 0; } while(0)
#define D2_SetOpenDrain()       do { ODCONDbits.ODCD2 = 1; } while(0)
#define D2_SetAnalogMode()      do { ANSELDbits.ANSD2 = 1; } while(0)
#define D2_SetDigitalMode()     do { ANSELDbits.ANSD2 = 0; } while(0)

// get/set D3 aliases
#define D3_TRIS                 TRISDbits.TRISD3
#define D3_LAT                  LATDbits.LATD3
#define D3_PORT                 PORTDbits.RD3
#define D3_WPU                  WPUDbits.WPUD3
#define D3_OD                   ODCONDbits.ODCD3
#define D3_ANS                  ANSELDbits.ANSD3
#define D3_SetHigh()            do { LATDbits.LATD3 = 1; } while(0)
#define D3_SetLow()             do { LATDbits.LATD3 = 0; } while(0)
#define D3_Toggle()             do { LATDbits.LATD3 = ~LATDbits.LATD3; } while(0)
#define D3_GetValue()           PORTDbits.RD3
#define D3_SetDigitalInput()    do { TRISDbits.TRISD3 = 1; } while(0)
#define D3_SetDigitalOutput()   do { TRISDbits.TRISD3 = 0; } while(0)
#define D3_SetPullup()          do { WPUDbits.WPUD3 = 1; } while(0)
#define D3_ResetPullup()        do { WPUDbits.WPUD3 = 0; } while(0)
#define D3_SetPushPull()        do { ODCONDbits.ODCD3 = 0; } while(0)
#define D3_SetOpenDrain()       do { ODCONDbits.ODCD3 = 1; } while(0)
#define D3_SetAnalogMode()      do { ANSELDbits.ANSD3 = 1; } while(0)
#define D3_SetDigitalMode()     do { ANSELDbits.ANSD3 = 0; } while(0)

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
/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC16F18875
        Driver Version    :  2.00
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

#include "mcc_generated_files/mcc.h"

/*
                         Main application
 */


void secuencia1(void){
    for(int i = 1 ; i <= 15; i++){

        if(PORTAbits.RA1 ==1 || PORTAbits.RA2 ==1 ){
            break;
        }
                
        LATB = 0b01100001; //1
        __delay_ms(1000);
      if(PORTAbits.RA1 ==1 || PORTAbits.RA2 ==1 ){
            break;
        }
        LATB = 0b11110010; //3
        __delay_ms(1000);
      if(PORTAbits.RA1 ==1 || PORTAbits.RA2 ==1 ){
            break;
        }
        LATB = 0b10110110; //5
        __delay_ms(1000);

        LATB = 0b11100100; //7
        __delay_ms(1000);
      if(PORTAbits.RA1 ==1 || PORTAbits.RA2 ==1 ){
            break;
        }
        LATB = 0b11110110; //9
        __delay_ms(1000);
        if(PORTAbits.RA1 ==1 || PORTAbits.RA2 ==1 ){
            break;
        }}
        
        return;
};
void secuencia2(void){
    for(int i = 1 ; i <= 15; i++){
        __delay_ms(200);
        if(PORTAbits.RA0 ==1 || PORTAbits.RA2 ==1 ){
            break;
        }
                
        LATB = 0b11111101; //0
        __delay_ms(1000);
  if(PORTAbits.RA0 ==1 || PORTAbits.RA2 ==1 ){
            break;
        }
        LATB = 0b11011010; //2
        __delay_ms(1000);
  if(PORTAbits.RA0 ==1 || PORTAbits.RA2 ==1 ){
            break;
        }
        LATB = 0b01100110; //4
        __delay_ms(1000);
  if(PORTAbits.RA0 ==1 || PORTAbits.RA2 ==1 ){
            break;
        }
        LATB = 0b10111110; //6
        __delay_ms(1000);
  if(PORTAbits.RA0 ==1 || PORTAbits.RA2 ==1 ){
            break;
        }
        LATB = 0b11111111; // 8
        __delay_ms(1000);

//
        if(PORTAbits.RA0 ==1 || PORTAbits.RA2 ==1 ){
            break;
        }}
        
        return;
};
void secuencia3(void){
    for(int i = 1 ; i <= 15; i++){
        __delay_ms(200);
        if(PORTAbits.RA0 ==1 || PORTAbits.RA1 ==1  ){
            break;
        }
                
          LATB = 0b11101110; //A
        __delay_ms(1000);
          if(PORTAbits.RA0 ==1 || PORTAbits.RA1 ==1 ){
            break;
        }
          LATB = 0b00111110; //B
        __delay_ms(1000);
          if(PORTAbits.RA0 ==1 || PORTAbits.RA1 ==1 ){
            break;
        }
          LATB = 0b10011100; //C
        __delay_ms(1000);
          if(PORTAbits.RA0 ==1 || PORTAbits.RA1 ==1 ){
            break;
        }
          LATB = 0b01111010; //D
        __delay_ms(1000);
          if(PORTAbits.RA0 ==1 || PORTAbits.RA1 ==1 ){
            break;
        }
          LATB = 0b10011110; //E
        __delay_ms(1000);
          if(PORTAbits.RA0 ==1 || PORTAbits.RA1 ==1 ){
            break;
        }
          LATB = 0b10001110; //F
        __delay_ms(1000);
        

        if(PORTAbits.RA0 ==1 || PORTAbits.RA1 ==1 ){
            break;
        }
        }
        return;
};
void main(void)
{
    // initialize the device
    SYSTEM_Initialize();


    // When using interrupts, you need to set the Global and Peripheral Interrupt Enable bits
    // Use the following macros to:

    // Enable the Global Interrupts
    //INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();


    while (1) {
        __delay_ms(200);
        
        if (PORTAbits.RA0 == 1) {
            secuencia1();
        }
        if (PORTAbits.RA1 == 1) {
            secuencia2();
        }
        if (PORTAbits.RA2 == 1) {
            secuencia3();
        }



    }
}


/**
 End of File
*/
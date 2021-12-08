/*
 * File:   main.c
 * Author: David
 *
 * Created on 2 de diciembre de 2021, 14:28
 */

// CONFIGURAMOS EL RELOG

#pragma config FOSC = INTOSC    // Oscillator Selection->INTOSC oscillator: I/O function on CLKIN pin
#pragma config WDTE = OFF    // Watchdog Timer Enable->WDT disabled
#pragma config PWRTE = OFF    // Power-up Timer Enable->PWRT disabled
#pragma config MCLRE = ON    // MCLR Pin Function Select->MCLR/VPP pin function is MCLR
#pragma config CP = OFF    // Flash Program Memory Code Protection->Program memory code protection is disabled
#pragma config CPD = OFF    // Data Memory Code Protection->Data memory code protection is disabled
#pragma config BOREN = ON    // Brown-out Reset Enable->Brown-out Reset enabled
#pragma config CLKOUTEN = OFF    // Clock Out Enable->CLKOUT function is disabled. I/O or oscillator function on the CLKOUT pin
#pragma config IESO = ON    // Internal/External Switchover->Internal/External Switchover mode is enabled
#pragma config FCMEN = ON    // Fail-Safe Clock Monitor Enable->Fail-Safe Clock Monitor is enabled

// CONFIG2
#pragma config WRT = OFF    // Flash Memory Self-Write Protection->Write protection off
#pragma config VCAPEN = OFF    // Voltage Regulator Capacitor Enable->All VCAP pin functionality is disabled
#pragma config PLLEN = OFF    // PLL Enable->4x PLL disabled
#pragma config STVREN = ON    // Stack Overflow/Underflow Reset Enable->Stack Overflow or Underflow will cause a Reset
#pragma config BORV = LO    // Brown-out Reset Voltage Selection->Brown-out Reset Voltage (Vbor), low trip point selected.
#pragma config LVP = ON    // Low-Voltage Programming Enable->Low-voltage programming enabled

#define _XTAL_FREQ 31000


#include <xc.h>
#include <stdint.h>
#include <stdbool.h>
int i =0;
volatile uint8_t timer0ReloadVal;
void (*TMR0_InterruptHandler)(void);
uint8_t TMR0_ReadTimer(void)
{
    uint8_t readVal;

    readVal = TMR0;

    return readVal;
}

void TMR0_WriteTimer(uint8_t timerVal)
{
    // Write to the Timer0 register
    TMR0 = timerVal;
}

void TMR0_Reload(void)
{
    // Write to the Timer0 register
    TMR0 = timer0ReloadVal;
}

void TMR0_ISR(void)
{

    // Clear the TMR0 interrupt flag
    INTCONbits.TMR0IF = 0;

    TMR0 = timer0ReloadVal;

    if(TMR0_InterruptHandler)
    {
        TMR0_InterruptHandler();
    }

    // add your TMR0 interrupt custom code
}


void TMR0_SetInterruptHandler(void (* InterruptHandler)(void)){
    TMR0_InterruptHandler = InterruptHandler;
}

void TMR0_DefaultInterruptHandler(void){
    i+=1;
    if(i==5){
        i = 0;
    }
}
void __interrupt() timer0(void){
 if(INTCONbits.TMR0IE == 1 && INTCONbits.TMR0IF == 1)
    {
        TMR0_ISR();
          i++;
    }
      
}

void main(void) {
    OSCCON = 0x02;
    // TUN 0; 
    OSCTUNE = 0x00;
    // SBOREN disabled; 
    BORCON = 0x00;
    //DECLARAMOS LOS PINES COMO ENTRADAS O SALIDAS TENIENDO EN CUENTA QUE 1 ES PARA ENTRADA Y 0 PARA SALIDA

    TRISE = 0x0F;
    TRISA = 0xFF;
    TRISB = 0x00; //ACTIVAMOS EL PUERTO B COMO SALIDAS A TODOS LOS PINES 

    
    // DECLARAMOS LOS PINES COMO DIGITALES 0 PARA DIGITAL Y 1 PARA ANALOGICO
    ANSELB = 0x00;
    ANSELA = 0x00;
    //CONFIGURAMOS LA INTERRUPCION DEL TIMER
    INTCONbits.TMR0IE = 1;
    INTCONbits.TMR0IF = 0; 
    INTCONbits.GIE = 1; // HABILITAMOS LAS INTERRUPCIONES EN GLOBALES
    //CONFIGURACION DEL TIEMPO DEL TIMER
    OPTION_REG = (uint8_t)((OPTION_REG & 0xC0) | (0xD5 & 0x3F)); 
    //DESBORDAMIENTO DEL TIMER
    timer0ReloadVal= 14;
    TMR0 = 40;
    TMR0_SetInterruptHandler(TMR0_DefaultInterruptHandler);
    while(1){
        
    switch (i) {
        case 0:
            LATB = 0b01100001; //1
            break;
        case 1:
            LATB = 0b11110010; //3
            break;
        case 2:
            LATB = 0b10110110; //5
            break;
        case 3:
            LATB = 0b11100100; //7
            break;
        case 4:
            LATB = 0b11110110; //9
            break;

    }
    }
    
}

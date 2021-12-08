
#include <xc.h>
#include "funciones.h"
#include "variables_globales.h"
#include "config_relog.h"
#define _XTAL_FREQ 31000

void (*TMR0_InterruptHandler)(void);
void (*IOCAF0_InterruptHandler)(void);
void (*IOCAF1_InterruptHandler)(void);
void (*IOCAF2_InterruptHandler)(void);
void (*IOCCF2_InterruptHandler)(void);
void (*IOCCF3_InterruptHandler)(void);

void IOCAF0_ISR(void) {

    if(IOCAF0_InterruptHandler)
    {
        IOCAF0_InterruptHandler();
    }
    IOCAFbits.IOCAF0 = 0;
}




void IOCAF1_ISR(void) {

    if(IOCAF1_InterruptHandler)
    {
        IOCAF1_InterruptHandler();
    }
    IOCAFbits.IOCAF1 = 0;
}


void IOCAF2_ISR(void) {

    if(IOCAF2_InterruptHandler)
    {
        IOCAF2_InterruptHandler();
    }
    IOCAFbits.IOCAF2 = 0;
}


void IOCCF2_ISR(void) {

    if(IOCCF2_InterruptHandler)
    {
        IOCCF2_InterruptHandler();
    }
    IOCCFbits.IOCCF2 = 0;
}


void IOCCF3_ISR(void) {

    if(IOCCF3_InterruptHandler)
    {
        IOCCF3_InterruptHandler();
    }
    IOCCFbits.IOCCF3 = 0;
}

void PIN_MANAGER_IOC(void)
{   
    if(IOCAFbits.IOCAF0 == 1)
    {
        IOCAF0_ISR();  
    }	
    if(IOCAFbits.IOCAF1 == 1)
    {
        IOCAF1_ISR();  
    }	
    if(IOCAFbits.IOCAF2 == 1)
    {
        IOCAF2_ISR();  
    }	
    if(IOCCFbits.IOCCF2 == 1)
    {
        IOCCF2_ISR();  
    }	
    if(IOCCFbits.IOCCF3 == 1)
    {
        IOCCF3_ISR();  
    }	
}


void IOCAF0_SetInterruptHandler(void (* InterruptHandler)(void)){
    IOCAF0_InterruptHandler = InterruptHandler;
}


void IOCAF0_DefaultInterruptHandler(void){
    j=2;
}

void IOCAF1_SetInterruptHandler(void (* InterruptHandler)(void)){
    IOCAF1_InterruptHandler = InterruptHandler;
}


void IOCAF1_DefaultInterruptHandler(void){

    j=1;
}




void IOCAF2_SetInterruptHandler(void (* InterruptHandler)(void)){
    IOCAF2_InterruptHandler = InterruptHandler;
}


void IOCAF2_DefaultInterruptHandler(void){
    j=0;
}



void IOCCF2_SetInterruptHandler(void (* InterruptHandler)(void)){
    IOCCF2_InterruptHandler = InterruptHandler;
}

void IOCCF2_DefaultInterruptHandler(void){

    x-=10;
    if(x>= 10 && x<=240 ){
    TMR0H = x;
    
    }else{
        x=10;
    }
}


void IOCCF3_SetInterruptHandler(void (* InterruptHandler)(void)){
    IOCCF3_InterruptHandler = InterruptHandler;
}

void IOCCF3_DefaultInterruptHandler(void){
    x+=10;
    if(x>= 10 && x<=240 ){
    TMR0H = x;
    
    }else{
        x=240;
    }
    
    
}




void TMR0_ISR(void)
{
    PIR0bits.TMR0IF = 0;
    if(TMR0_InterruptHandler)
    {
        TMR0_InterruptHandler();
    }
}


void TMR0_SetInterruptHandler(void (* InterruptHandler)(void)){
    TMR0_InterruptHandler = InterruptHandler;
}

void TMR0_DefaultInterruptHandler(void){
    i+= 1;
    if(i==5){
        i=0;
    }
    
}
void __interrupt() interrupcion (void)
{
    if(PIE0bits.TMR0IE == 1 && PIR0bits.TMR0IF == 1)
    {
        TMR0_ISR();
    }
    else if(PIE0bits.IOCIE == 1 && PIR0bits.IOCIF == 1)
    {
        PIN_MANAGER_IOC();
    }
    else
    {
    }
}
void main(void)
{
    // RELOG
    OSCCON1 = 0x50;
    OSCCON3 = 0x00;
    OSCEN = 0x00;
    OSCFRQ = 0x00;
    OSCTUNE = 0x00;
   // CONFIGURACION DE ENTRADAS Y SALIDAS 0 PARA SALIDAS Y 1 PARA ENTRADAS
    TRISE = 0x07;
    TRISA = 0xFF;
    TRISB = 0x00;
    TRISC = 0xFF;
    TRISD = 0xFF;

    /**
    ANSEL
    */
    ANSELD = 0xFF;
    ANSELC = 0xF3;
    ANSELB = 0x00;
    ANSELE = 0x07;
    ANSELA = 0xF8;
    
    IOCAFbits.IOCAF0 = 0;
    IOCAFbits.IOCAF1 = 0;
    IOCAFbits.IOCAF2 = 0;
    IOCANbits.IOCAN0 = 1;
    IOCANbits.IOCAN1 = 1;
    IOCANbits.IOCAN2 = 1;
    IOCAPbits.IOCAP0 = 0;
    IOCAPbits.IOCAP1 = 0;
    IOCAPbits.IOCAP2 = 0;
    IOCCFbits.IOCCF2 = 0;
    IOCCFbits.IOCCF3 = 0;
    IOCCNbits.IOCCN2 = 1;
    IOCCNbits.IOCCN3 = 1;
    IOCCPbits.IOCCP2 = 0;
    IOCCPbits.IOCCP3 = 0;
    PIE0bits.IOCIE = 1; 
    //HABILITAMOS INTERRUPCIONES   
    // CONFIGURACION DEL TIMMER
    T0CON1 = 0x88;
    TMR0H = 0x78;
    TMR0L = 0x00;
    PIR0bits.TMR0IF = 0;
    PIE0bits.TMR0IE = 1;
    INTCONbits.GIE = 1;
    PIE0bits.IOCIE = 1; 
    TMR0_SetInterruptHandler(TMR0_DefaultInterruptHandler);
    IOCAF0_SetInterruptHandler(IOCAF0_DefaultInterruptHandler);
    IOCAF1_SetInterruptHandler(IOCAF1_DefaultInterruptHandler);
    IOCAF2_SetInterruptHandler(IOCAF2_DefaultInterruptHandler);
    IOCCF2_SetInterruptHandler(IOCCF2_DefaultInterruptHandler);
    IOCCF3_SetInterruptHandler(IOCCF3_DefaultInterruptHandler);

    T0CON0 = 0x80;
    while (1)
    {
        switch (j) {
            case 0:
                secuencia1(i);
                break;
            case 1:
                secuencia2(i);
                break;
            case 2:
                secuencia3(i);
                break;

            }    
             
        
    }
}
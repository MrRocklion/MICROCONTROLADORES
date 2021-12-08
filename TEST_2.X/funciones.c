/*
 * File:   funciones.c
 * Author: David
 *
 * Created on November 30, 2021, 9:04 AM
 */


#include <xc.h>
void secuencia1(int p) {
    switch (p) {
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
void secuencia2(int p) {
    switch (p) {
        case 0:
            LATB = 0b11111101; //0
            break;
        case 1:
            LATB = 0b11011010; //2
            break;
        case 2:
            LATB = 0b01100110; //4
            break;
        case 3:
            LATB = 0b10111110; //6
            break;
        case 4:
            LATB = 0b11111111; // 8
            break;

    }
}
void secuencia3(int p) {
    switch (p) {
        case 0:
            LATB = 0b11101110; //A
            break;
        case 1:
            LATB = 0b00111110; //B
            break;
        case 2:
            LATB = 0b10011100; //C
            break;
        case 3:
            LATB = 0b01111010; //D
            break;
        case 4:
            LATB = 0b10011110; //E
            break;

    }
}

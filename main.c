/*
 * File:   main.c
 * Author: Ahmad Osama
 *
 * Created on August 17, 2024, 4:30 PM
 */

#define F_CPU 16000000UL // 16 MHz
#include <avr/io.h>
#include <util/delay.h>
#include "DIO.h"

#define LED0 PORTA2
#define BUTTON0 PINA7

#define OUTPUT 1
#define INPUT  0
#define ON     1
#define OFF    0



int main(void) {
    while (1) {
        /* 
        DDRA |= (1 << 2);
        PORTA |= (1 << 2);
        _delay_ms(2000);
        PORTA &= ~(1 << 2);
        _delay_ms(2000);
        
        
        setPORTA_PIN_DIR(2, OUTPUT);
        setPORTA_PIN(2, ON);
        _delay_ms(2000);
        setPORTA_PIN(2, OFF);
        _delay_ms(2000);
        */
        
        setPORTA_PIN_DIR(LED0, OUTPUT);
        setPORTA_PIN_DIR(BUTTON0, INPUT);
        if (readPORTA_PIN(BUTTON0)) {
            setPORTA_PIN(LED0, ON);
        }
        else {
            setPORTA_PIN(LED0, OFF);
        }
        
    }
}

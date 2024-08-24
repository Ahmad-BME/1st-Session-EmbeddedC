#include <avr/io.h>

#define OUTPUT 1
#define INPUT  0
#define ON     1
#define OFF    0

// PORT A
void setPORTA_PIN_DIR(int pinNum, int Direction) {
    switch (Direction){
        case OUTPUT:
            DDRA |= (1 << pinNum);
            break;
        case INPUT:
            DDRA &= ~(1 << pinNum);
            break;
    }
}

void setPORTA_PIN(int pinNum, int state){
    switch (state){
        case ON:
            PORTA |= (1 << pinNum);
            break;
        case OFF:
            PORTA &= ~(1 << pinNum);
            break;
    }
}

int readPORTA_PIN(int pinNum){
    if (PINA & (1 << pinNum)) {
        return 1;
    }
    else {
        return 0;
    }
}

void setPORTA_DIR(int Direction) {
    switch (Direction){
        case OUTPUT:
            DDRA = 0xFF;
            break;
        case INPUT:
            DDRA = 0x00;
            break;
    }
}

void setPORTA(int state) {
    switch (state){
        case ON:
            PORTA = 0xFF;
            break;
        case OFF:
            PORTA = 0x00;
            break;
    }
}

int readPORTA() {
    return PINA;
}


// PORT B
void setPORTB_PIN_DIR(int pinNum, int Direction) {
    switch (Direction){
        case OUTPUT:
            DDRB |= (1 << pinNum);
            break;
        case INPUT:
            DDRB &= ~(1 << pinNum);
            break;
    }
}

void setPORTB_PIN(int pinNum, int state){
    switch (state){
        case ON:
            PORTB |= (1 << pinNum);
            break;
        case OFF:
            PORTB &= ~(1 << pinNum);
            break;
    }
}

int readPORTB_PIN(int pinNum){
    if (PINB & (1 << pinNum)) {
        return 1;
    }
    else {
        return 0;
    }
}

void setPORTB_DIR(int Direction){
        switch (Direction) {
        case OUTPUT:
            DDRB = 0xFF;
            break;
        case INPUT:
            DDRB = 0x00;
            break;

    }
}

void setPORTB(int state){
    PORTB = state;
}

int  readPORTB(){
    return PINB;
}

// PORT C
void setPORTC_PIN_DIR(int pinNum, int Direction) {
    switch (Direction){
        case OUTPUT:
            DDRC |= (1 << pinNum);
            break;
        case INPUT:
            DDRC &= ~(1 << pinNum);
            break;
    }
}

void setPORTC_PIN(int pinNum, int state){
    switch (state){
        case ON:
            PORTC |= (1 << pinNum);
            break;
        case OFF:
            PORTC &= ~(1 << pinNum);
            break;
    }
}

int readPORTC_PIN(int pinNum){
    if (PINC & (1 << pinNum)) {
        return 1;
    }
    else {
        return 0;
    }
}

void setPORTC_DIR(int Direction){
        switch (Direction) {
        case OUTPUT:
            DDRC = 0xFF;
            break;
        case INPUT:
            DDRC = 0x00;
            break;

    }
}

void setPORTC(int state){
    PORTC = state;
}

int  readPORTC(){
    return PINC;
}

// PORT D
void setPORTD_PIN_DIR(int pinNum, int Direction) {
    switch (Direction){
        case OUTPUT:
            DDRD |= (1 << pinNum);
            break;
        case INPUT:
            DDRD &= ~(1 << pinNum);
            break;
    }
}

void setPORTD_PIN(int pinNum, int state){
    switch (state){
        case ON:
            PORTD |= (1 << pinNum);
            break;
        case OFF:
            PORTD &= ~(1 << pinNum);
            break;
    }
}

int readPORTD_PIN(int pinNum){
    if (PIND & (1 << pinNum)) {
        return 1;
    }
    else {
        return 0;
    }
}

void setPORTD_DIR(int Direction){
        switch (Direction) {
        case OUTPUT:
            DDRD = 0xFF;
            break;
        case INPUT:
            DDRD = 0x00;
            break;

    }
}

void setPORTD(int state){
    PORTD = state;
}

int  readPORTD(){
    return PIND;
}
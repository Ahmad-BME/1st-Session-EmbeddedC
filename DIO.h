/* 
 * File:   DIO.h
 * Author: Ahmad Osama
 *
 * Created on August 24, 2024, 8:59 AM
 */

#ifndef DIO_H
#define	DIO_H

#ifdef	__cplusplus
extern "C" {
#endif




#ifdef	__cplusplus
}
#endif

#endif	/* DIO_H */

// PORT A
void setPORTA_PIN_DIR(int pinNum, int Direction);
void setPORTA_PIN(int pinNum, int state);
int readPORTA_PIN(int pinNum);

void setPORTA_DIR(int Direction);
void setPORTA(int state);
int readPORTA();


// PORTB
void setPORTB_PIN_DIR(int pinNum, int Direction);
void setPORTB_PIN(int pinNum, int state);
int readPORTB_PIN(int pinNum);

void setPORTB_DIR(int Direction);
void setPORTB(int state);
int readPORTB();

// PORT C
void setPORTC_PIN_DIR(int pinNum, int Direction);
void setPORTC_PIN(int pinNum, int state);
int readPORTC_PIN(int pinNum);

void setPORTC_DIR(int Direction);
void setPORTC(int state);
int readPORTC();

// PORT D
void setPORTD_PIN_DIR(int pinNum, int Direction);
void setPORTD_PIN(int pinNum, int state);
int readPORTD_PIN(int pinNum);

void setPORTD_DIR(int Direction);
void setPORTD(int state);
int readPORTD();



/*
 * File        : MTIMER1_Private.h
 * Description : This file includes Timer1 Private Macros for Atmega32
 * Author      : Abdelrhman Rabie Embedded SW Engineer 
 * Date        : 29/9/2022 
 */
#ifndef __TIMER1_PRIVATE_h__
#define __TIMER1_PRIVATE_h__

#define TCCR1A_Register    *((volatile u8*) 0x4F)
#define TCCR1B_Register    *((volatile u8*) 0x4E)
#define TCNT1H_Register    *((volatile u8*) 0x4D)
#define TCNT1L_Register    *((volatile u8*) 0x4C)
#define TCNT1_Register    *((volatile u8*) 0x4C)
#define OCR1AH_Register    *((volatile u8*) 0x4B)
#define OCR1AL_Register    *((volatile u8*) 0x4A)
#define OCR1A_Register     *((volatile u8*) 0x4A)
#define OCR1BH_Register    *((volatile u8*) 0x49)
#define OCR1BL_Register    *((volatile u8*) 0x48)
#define OCR1B_Register     *((volatile u8*) 0x48)
#define ICR1L_Register     *((volatile u8*) 0x47)
#define ICR1_Register     *((volatile u8*) 0x47)
#define ICR1H_Register     *((volatile u8*) 0x46)
#define TIMSK_Register     *((volatile u8*) 0x59)
#define TIFR_Register      *((volatile u8*) 0x58)


#define   COM1A1   7
#define	  COM1A0   6
#define	  COM1B1   5
#define	  COM1B0   4
#define   WGM10    0
#define	  WGM11    1
#define   WGM12    3
#define   WGM13    4
#define   CS10     0
#define   CS11     1
#define   CS12     2
#define   ICES1    6
#define   TICIE1   5

void __vector_6 (void) __attribute__((signal));




#endif
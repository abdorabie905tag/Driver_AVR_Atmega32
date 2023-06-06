/*
 * File        : H7SEG_Private.h
 * Description : This file includes 7SEG Driver Private declerations for Atmega32
* Author      : Abdelrhman Rabie Embedded SW Engineer 
 */


#ifndef __H7SEG_Private_h__
#define __H7SEG_Private_h__
 
/* array that contains seven segment numbers' representation in binary that will be 
 * used to display corresponding number when assigned to a given port
 */ 
const u8 H7SEG_u8SevenSegArray[10]={0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80,0x90};

#endif 
	
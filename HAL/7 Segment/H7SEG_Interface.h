/*
 * File        : H7SEG_Inerface.h
 * Description : This interface file includes 7SEG Driver Prototypes and declarations for Atmega32
* Author      : Abdelrhman Rabie Embedded SW Engineer 
 */

#ifndef __H7SEG_Interface_h__ 
#define __H7SEG_Interface_h__


/*
 * Prototype   : u8 H7SEG_u8Init(u8 Copy_u8Reg);
 * Description : Initialize one 7-Segment of 8 LEDs on specific port
 * Arguments   : Register: takes only MDIO_PORTA,MDIO_PORTB,MDIO_PORTC,MDIO_PORTD
 * return      : u8 number used for error handling
 *			     (0) means no error,(1) means Undefined PORT Argument
 */
u8 H7SEG_u8Init(u8 Copy_u8Reg); 


/*
 * Prototype   : u8 H7SEG_u8DisplayNumber(u8 Copy_u8Reg,u8 Copy_u8DisblayNumber);
 * Description : Display a number on a given 7-segment 
 * Arguments   : Register: takes only MDIO_PORTA,MDIO_PORTB,MDIO_PORTC,MDIO_PORTD
 *               Number  : takes only from 0 to 9 
 * return      : u8 number for error handling 
 *               (0) means no error, (1) means Undefined PORT, (2) means Display Number out of range error 
 */
u8 H7SEG_u8DisplayNumber(u8 Copy_u8Reg,u8 Copy_u8DisblayNumber); 

#endif

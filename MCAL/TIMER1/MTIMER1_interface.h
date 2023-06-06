/*
 * File        : MTIMER0_cnfg.h
 * Description : This file includes Timer0 Private Macros for Atmega32
 * Author      : Abdelrhman Rabie Embedded SW Engineer 
 * Date        : 29/9/2022 
 */
#ifndef __TIMER1_INTERFACE_h__
#define __TIMER1_INTERFACE_h__

void MTIMER1_voidInit();
void MTIMER1_voidTimer1SetOCR1A(u16 Copy_u16OCRA);
void MTIMER1_voidTimer1SetOCR1B(u16 Copy_u16OCRB);
void MTIMER1_voidTimer1SetICR1(u16 Copy_u16ICR1);
void MTIMER1_voidTimer1ICUInit(void);
void MTIMER1_voidTimer1ICUSetTriggerEdge(u8 Copy_u8ICUEdgeType);
u16 MTIMER1_voidTimer1ICUGetInputCaptureValue(void);
void MTIMER1_voidTimer1ICUSetCallBack(void (*Copy_pFun) (void));
void MTIMER1_voidClearTimer1Value(void);


#endif
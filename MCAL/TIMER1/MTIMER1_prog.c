/*
 * File        : MTIMER0_prog.h
 * Description : This file includes Timer0 Private Macros for Atmega32
 * Author      : Abdelrhman Rabie Embedded SW Engineer 
 * Date        : 29/9/2022 
 */
#include "LSTD_Types.h"
#include "LUTILS.h"
#include "Timer1_interface.h"
#include "Timer1_private.h"
#include "Timer1_cnfg.h"

void MTIMER1_voidInit()
{
	//ChannelA
	
	#if Compare_Output_Mode_for_ChannelA == Normal_port_operation
	L_UTILS_CLEAR_BIT(TCCR1A_Register,COM1A1);
	L_UTILS_CLEAR_BIT(TCCR1A_Register,COM1A0);
	#elif Compare_Output_Mode_for_ChannelA == Toggle
	L_UTILS_CLEAR_BIT(TCCR1A_Register,COM1A1);
	L_UTILS_SET_BIT(TCCR1A_Register,COM1A0);
	#elif Compare_Output_Mode_for_ChannelA == Clear
	L_UTILS_SET_BIT(TCCR1A_Register,COM1A1);
	L_UTILS_CLEAR_BIT(TCCR1A_Register,COM1A0);
	#elif Compare_Output_Mode_for_ChannelA == Set
	L_UTILS_SET_BIT(TCCR1A_Register,COM1A1);
	L_UTILS_SET_BIT(TCCR1A_Register,COM1A0);
	#endif
	
	// ChannelB
	
	#if Compare_Output_Mode_for_ChannelB == Normal_port_operation
	L_UTILS_CLEAR_BIT(TCCR1A_Register,COM1B1);
	L_UTILS_CLEAR_BIT(TCCR1A_Register,COM1B0);
	#elif Compare_Output_Mode_for_ChannelB == Toggle
	L_UTILS_CLEAR_BIT(TCCR1A_Register,COM1B1);
	L_UTILS_SET_BIT(TCCR1A_Register,COM1B0);
	#elif Compare_Output_Mode_for_ChannelB == Clear
	L_UTILS_SET_BIT(TCCR1A_Register,COM1B1);
	L_UTILS_CLEAR_BIT(TCCR1A_Register,COM1B0);
	#elif Compare_Output_Mode_for_ChannelB == Set
	L_UTILS_SET_BIT(TCCR1A_Register,COM1B1);
	L_UTILS_SET_BIT(TCCR1A_Register,COM1B0);
	#endif
	
	// timer mode
	
	#if MODE == Normal
	L_UTILS_CLEAR_BIT(TCCR1A_Register,WGM10);
	L_UTILS_CLEAR_BIT(TCCR1A_Register,WGM11);
	L_UTILS_CLEAR_BIT(TCCR1B_Register,WGM12);
	L_UTILS_CLEAR_BIT(TCCR1B_Register,WGM13);
	#elif MODE == PWM_Phase_Correct_8_bit
	L_UTILS_SET_BIT(TCCR1A_Register,WGM10);
	L_UTILS_CLEAR_BIT(TCCR1A_Register,WGM11);
	L_UTILS_CLEAR_BIT(TCCR1B_Register,WGM12);
	L_UTILS_CLEAR_BIT(TCCR1B_Register,WGM13);
	#elif MODE == PWM_Phase_Correct_9_bit
	L_UTILS_CLEAR_BIT(TCCR1A_Register,WGM10);
	L_UTILS_SET_BIT(TCCR1A_Register,WGM11);
	L_UTILS_CLEAR_BIT(TCCR1B_Register,WGM12);
	L_UTILS_CLEAR_BIT(TCCR1B_Register,WGM13);
	#elif MODE == PWM_Phase_Correct_10_bit
	L_UTILS_SET_BIT(TCCR1A_Register,WGM10);
	L_UTILS_SET_BIT(TCCR1A_Register,WGM11);
	L_UTILS_CLEAR_BIT(TCCR1B_Register,WGM12);
	L_UTILS_CLEAR_BIT(TCCR1B_Register,WGM13);
	#elif MODE == CTC_OCR1A
	L_UTILS_CLEAR_BIT(TCCR1A_Register,WGM10);
	L_UTILS_CLEAR_BIT(TCCR1A_Register,WGM11);
	L_UTILS_SET_BIT(TCCR1B_Register,WGM12);
	L_UTILS_CLEAR_BIT(TCCR1B_Register,WGM13);
	#elif MODE == Fast_PWM_8_bit
	L_UTILS_SET_BIT(TCCR1A_Register,WGM10);
	L_UTILS_CLEAR_BIT(TCCR1A_Register,WGM11);
	L_UTILS_SET_BIT(TCCR1B_Register,WGM12);
	L_UTILS_CLEAR_BIT(TCCR1B_Register,WGM13);
	#elif MODE == Fast_PWM_9_bit
	L_UTILS_CLEAR_BIT(TCCR1A_Register,WGM10);
	L_UTILS_SET_BIT(TCCR1A_Register,WGM11);
	L_UTILS_SET_BIT(TCCR1B_Register,WGM12);
	L_UTILS_CLEAR_BIT(TCCR1B_Register,WGM13);
	#elif MODE == Fast_PWM_10_bit
	L_UTILS_SET_BIT(TCCR1A_Register,WGM10);
	L_UTILS_SET_BIT(TCCR1A_Register,WGM11);
	L_UTILS_SET_BIT(TCCR1B_Register,WGM12);
	L_UTILS_CLEAR_BIT(TCCR1B_Register,WGM13);
	#elif MODE == PWM_Phase_and_Frequency_Correct_ICR1
	L_UTILS_CLEAR_BIT(TCCR1A_Register,WGM10);
	L_UTILS_CLEAR_BIT(TCCR1A_Register,WGM11);
	L_UTILS_CLEAR_BIT(TCCR1B_Register,WGM12);
	L_UTILS_SET_BIT(TCCR1B_Register,WGM13);
	#elif MODE == PWM_Phase_and_Frequency_Correct_OCR1A
	L_UTILS_SET_BIT(TCCR1A_Register,WGM10);
	L_UTILS_CLEAR_BIT(TCCR1A_Register,WGM11);
	L_UTILS_CLEAR_BIT(TCCR1B_Register,WGM12);
	L_UTILS_SET_BIT(TCCR1B_Register,WGM13);
	#elif MODE == PWM_Phase_Correct_ICR1
	L_UTILS_CLEAR_BIT(TCCR1A_Register,WGM10);
	L_UTILS_SET_BIT(TCCR1A_Register,WGM11);
	L_UTILS_CLEAR_BIT(TCCR1B_Register,WGM12);
	L_UTILS_SET_BIT(TCCR1B_Register,WGM13);
	#elif MODE == PWM_Phase_Correct_OCR1A
	L_UTILS_SET_BIT(TCCR1A_Register,WGM10);
	L_UTILS_SET_BIT(TCCR1A_Register,WGM11);
	L_UTILS_CLEAR_BIT(TCCR1B_Register,WGM12);
	L_UTILS_SET_BIT(TCCR1B_Register,WGM13);
	#elif MODE == CTC_ICR1
	L_UTILS_CLEAR_BIT(TCCR1A_Register,WGM10);
	L_UTILS_CLEAR_BIT(TCCR1A_Register,WGM11);
	L_UTILS_SET_BIT(TCCR1B_Register,WGM12);
	L_UTILS_SET_BIT(TCCR1B_Register,WGM13);
	#elif MODE == Reserved
	L_UTILS_SET_BIT(TCCR1A_Register,WGM10);
	L_UTILS_CLEAR_BIT(TCCR1A_Register,WGM11);
	L_UTILS_SET_BIT(TCCR1B_Register,WGM12);
	L_UTILS_SET_BIT(TCCR1B_Register,WGM13);
	#elif MODE == Fast_PWM_ICR1
	L_UTILS_CLEAR_BIT_BIT(TCCR1A_Register,WGM10);
	L_UTILS_SET_BIT(TCCR1A_Register,WGM11);
	L_UTILS_SET_BIT(TCCR1B_Register,WGM12);
	L_UTILS_SET_BIT(TCCR1B_Register,WGM13);
	#elif MODE == Fast_PWM_OCR1A
	L_UTILS_SET_BIT_BIT(TCCR1A_Register,WGM10);
	L_UTILS_SET_BIT(TCCR1A_Register,WGM11);
	L_UTILS_SET_BIT(TCCR1B_Register,WGM12);
	L_UTILS_SET_BIT(TCCR1B_Register,WGM13);
	#endif
	
	// timer prescaler
	
	#if prescaler == No_clock_source
	L_UTILS_CLEAR_BIT(TCCR1B_Register,CS10);
	L_UTILS_CLEAR_BIT(TCCR1B_Register,CS11);
	L_UTILS_CLEAR_BIT(TCCR1B_Register,CS12);
	#elif prescaler == No_prescaling
	L_UTILS_SET_BIT(TCCR1B_Register,CS10);
	L_UTILS_CLEAR_BIT(TCCR1B_Register,CS11);
	L_UTILS_CLEAR_BIT(TCCR1B_Register,CS12);
	#elif prescaler == 8_prescaling
	L_UTILS_CLEAR_BIT(TCCR1B_Register,CS10);
	L_UTILS_SET_BIT(TCCR1B_Register,CS11);
	L_UTILS_CLEAR_BIT(TCCR1B_Register,CS12);
	#elif prescaler == 64_prescaling
	L_UTILS_SET_BIT(TCCR1B_Register,CS10);
	L_UTILS_SET_BIT(TCCR1B_Register,CS11);
	L_UTILS_CLEAR_BIT(TCCR1B_Register,CS12);
	#elif prescaler == 256_prescaling
	L_UTILS_CLEAR_BIT(TCCR1B_Register,CS10);
	L_UTILS_CLEAR_BIT_BIT(TCCR1B_Register,CS11);
	L_UTILS_SET_BIT(TCCR1B_Register,CS12);
	#elif prescaler == 1024_prescaling
	L_UTILS_SET_BIT(TCCR1B_Register,CS10);
	L_UTILS_CLEAR_BIT_BIT(TCCR1B_Register,CS11);
	L_UTILS_SET_BIT(TCCR1B_Register,CS12);
	#elif prescaler == Ex_falling_edge
	L_UTILS_CLEAR_BIT(TCCR1B_Register,CS10);
	L_UTILS_SET_BIT_BIT(TCCR1B_Register,CS11);
	L_UTILS_SET_BIT(TCCR1B_Register,CS12);
	#elif prescaler == Ex_rising_edge
	L_UTILS_SET_BIT(TCCR1B_Register,CS10);
	L_UTILS_SET_BIT_BIT(TCCR1B_Register,CS11);
	L_UTILS_SET_BIT(TCCR1B_Register,CS12);
	#endif
	
	
	
	
	
	
	

}

void MTIMER1_voidTimer1GeneratePWMOCR1A(u8 Copy_u8Intensity)
{
	u16 Copy_u16OCR1AValue;

	   #if MODE == PWM_Phase_Correct_8_bit
	        Copy_u16OCR1AValue=((u16)510*Copy_u8Intensity/100);
	        OCR1A_Register=Copy_u16OCR1AValue;
		#elif MODE == PWM_Phase_Correct_9_bit
	        Copy_u16OCR1AValue=((u16)1022*Copy_u8Intensity/100);
	        OCR1A_Register=Copy_u16OCR1AValue;
	    #elif MODE == PWM_Phase_Correct_10_bit
	        Copy_u16OCR1AValue=((u16)2046*Copy_u8Intensity/100);
	        OCR1A_Register=Copy_u16OCR1AValue;
		#elif MODE == Fast_PWM_8_bit	
	        Copy_u16OCR1AValue=(256*Copy_u8Intensity/100);
	        OCR1A_Register=Copy_u16OCR1AValue;
	   #elif MODE == Fast_PWM_9_bit
	        Copy_u16OCR1AValue=(512*Copy_u8Intensity/100);
	        OCR1A_Register=Copy_u16OCR1AValue;
	   #elif MODE == Fast_PWM_9_bit
	        Copy_u16OCR1AValue=((u16)1023*Copy_u8Intensity/100);
	        OCR1A_Register=Copy_u16OCR1AValue;
	   #endif
	
}
void TIMER1_voidTimer1GeneratePWMOCR1B(u8 Copy_u8Intensity)
{
	u16 Copy_u16OCR1BValue;

	   #if MODE == PWM_Phase_Correct_8_bit
	        Copy_u16OCR1BValue=((u16)510*Copy_u8Intensity/100);
	        OCR1B_Register=Copy_u16OCR1BValue;
		#elif MODE == PWM_Phase_Correct_9_bit
	        Copy_u16OCR1BValue=((u16)1022*Copy_u8Intensity/100);
	        OCR1B_Register=Copy_u16OCR1BValue;
	    #elif MODE == PWM_Phase_Correct_10_bit
	        Copy_u16OCR1BValue=((u16)2046*Copy_u8Intensity/100);
	        OCR1B_Register=Copy_u16OCR1BValue;
		#elif MODE == Fast_PWM_8_bit	
	        Copy_u16OCR1BValue=(256*Copy_u8Intensity/100);
	        OCR1B_Register=Copy_u16OCR1BValue;
	   #elif MODE == Fast_PWM_9_bit
	        Copy_u16OCR1BValue=(512*Copy_u8Intensity/100);
	        OCR1B_Register=Copy_u16OCR1BValue;
	   #elif MODE == Fast_PWM_9_bit
	        Copy_u16OCR1BValue=((u16)1023*Copy_u8Intensity/100);
	        OCR1B_Register=Copy_u16OCR1BValue;
	   #endif
	
}

void MTIMER1_voidTimer1SetOCR1A(u16 Copy_u16OCR1A)
{
	  OCR1AH_Register = (u8)(Copy_u16OCR1A>>8);
	  OCR1AL_Register = (u8)(Copy_u16OCR1A);
}
void MTIMER1_voidTimer1SetOCR1B(u16 Copy_u16OCR1B)
{
	  OCR1BH_Register = (u8)(Copy_u16OCR1B>>8);
	  OCR1BL_Register = (u8)(Copy_u16OCR1B);
}
void MTIMER1_voidTimer1SetICR1(u16 Copy_u16ICR1)
{
	  ICR1H_Register = (u8)(Copy_u16ICR1>>8);
	  ICR1L_Register = (u8)(Copy_u16ICR1);
}
static void(*Timer1_pICUSetCallBack)(void);
/************************************************************************************************************************************/
void MTIMER1_voidTimer1ICUInit(void)
{
	 SET_BIT(TCCR1B_Register,ICES1);
	 SET_BIT(TIMSK_Register,TICIE1);

	 CLR_BIT(TCCR1B_Register,CS10);
	 SET_BIT(TCCR1B_Register,CS11);
	 CLR_BIT(TCCR1B_Register,CS12);
}
void MTIMER1_voidTimer1ICUSetTriggerEdge(u8 Copy_u8ICUEdgeType)
{
   if(Copy_u8ICUEdgeType==TIMER1_ICU_RISING_EDGY_TYPE_MODE)
   {
	  SET_BIT(TCCR1B_Register,ICES1);
   }
   else if(Copy_u8ICUEdgeType==TIMER1_ICU_FALLING_EDGY_TYPE_MODE)
   {
	  CLR_BIT(TCCR1B_Register,ICES1);
   }
}
u16 MTIMER1_voidTimer1ICUGetInputCaptureValue(void)
{
	 return ICR1_Register;
}
void MTIMER1_voidTimer1ICUSetCallBack(void (*Copy_pFun) (void))
{
	 Timer1_pICUSetCallBack = Copy_pFun;
}
void MTIMER1_voidClearTimer1Value(void)
{
	 TCNT1_Register = 0;
}
void __vector_6 (void)
{
	if (Timer1_pICUSetCallBack!=NULL)
	{
		Timer1_pICUSetCallBack();
	}
}
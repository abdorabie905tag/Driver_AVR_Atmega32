/*
 * File        : MTIMER0_cnfg.h
 * Description : This file includes Timer0 Private Macros for Atmega32
 * Author      : Abdelrhman Rabie Embedded SW Engineer 
 * Date        : 29/9/2022 
 */
#ifndef __TIMER1_CNFG_h__
#define __TIMER1_CNFG_h__



//choose mode for channel  Normal_port_operation -- Toggle -- Clear -- Set
#define Compare_Output_Mode_for_ChannelA   Normal_port_operation

//choose mode for channel  Normal_port_operation -- Toggle -- Clear -- Set
#define Compare_Output_Mode_for_ChannelB   Normal_port_operation

// choose mode timer1
/*
Normal
Reserved
PWM_Phase_Correct_8_bit
PWM_Phase_Correct_9_bit
PWM_Phase_Correct_10_bit
CTC_OCR1A
CTC_ICR1
Fast_PWM_8_bit
Fast_PWM_9_bit
Fast_PWM_10_bit
PWM_Phase_and_Frequency_Correct_ICR1
PWM_Phase_and_Frequency_Correct_OCR1A
PWM_Phase_Correct_OCR1A
PWM_Phase_Correct_ICR1
Fast_PWM_ICR1
Fast_PWM_OCR1A
*/

#define MODE       Normal 
/*
choose prescaler
No_clock_source
No_prescaling
8_prescaling
64_prescaling
256_prescaling
1024_prescaling
Ex_falling_edge
Ex_rising_edge

*/
#define prescaler    256_prescaling




#endif
/*
 * File        : ADC_Config.c
 * Description : This file includes ADC configurations for Atmega32
 * Author      : Abdelrhman Rabie Embedded SW Engineer 
 * Date        : 15/9/2022 
 */


#ifndef _MADC_CONFIG_H_
#define _MADC_CONFIG_H_

/************************************************************************
 * ADC Configurations                                                   
 ************************************************************************/
/*Choose Vref Type*/
#define MADC_VREF	MADC_AVCC

/*If external voltage reference at AREF Pin config that voltage value in millivolt*/
#if MADC_VREF == MADC_AREF
	#define MADC_AREF_VALUE      5000
#endif

/*Choose ADC Reg Adjustment Type*/
#define MADC_REG_ADJUSTMENT			MADC_RIGHT_ADJUSTMENT
/*Choose ADC Auto trigger state*/
#define MADC_AUTO_TRIGGER_STATUS	MADC_AUTO_TRIGGER_DISABLED
/*Choose ADC Interrupt status*/
#define MADC_ADC_INT_STATUS			MADC_INT_DISABLED
/*Choose ADC CLK Prescaler*/
#define MADC_PRESCALER_VALUE		MADC_PRESCALER_128
/*Choose ADC Trigger Source*/
#define MADC_TRIGGER_SOURCE			MADC_FREE_RUNNING
/************************************************************************/
#endif

/*=========================================================================================
 * EOF
 *=========================================================================================*/
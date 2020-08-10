/**************************************************/
/**************************************************/
/*************  Author: Esmat Saied    ************/
/*************   Component: ADC       ************/
/*************   Layer: MCAL           ************/
/*************   Version: 1.00         ************/
/**************************************************/
/**************************************************/

#ifndef ADC_CONFIG_H_
#define ADC_CONFIG_H_

/*Available Options:
 * 1- AREF
 * 2- AVCC
 * 3- INTERNAL_2_56V
 * */
#define	ADC_u8_REF_SELECTION			AVCC

/*Choose the Pre-scaler Value:
 * 1- DIVIDE_BY_2
 * 2- DIVIDE_BY_4
 * 3- DIVIDE_BY_8
 * 4- DIVIDE_BY_16
 * 5- DIVIDE_BY_32
 * 6- DIVIDE_BY_64
 * 7- DIVIDE_BY_128*/
#define ADC_u8_PRESCALER_SELECTION		DIVIDE_BY_2

/*Choose Result Mode:
 *1- EIGHT_BITS
 *2- TEN_BITS*/
#define ADC_u8_RESULT_SELECTION			EIGHT_BITS

/*Choose Start Conversion Mode:
 * 1- MANUAL_TRIGGER
 * 2- AUTO_TRIGGER*/
#define ADC_u8_START_CONVERSION			MANUAL_TRIGGER

/*In Case of Auto Trigger:
 * - Choose the Auto Trigger Source:
 * 1- FREE_RUNNING_MODE
   2- ANALOG_COMPARATOR
   3- EXTERNAL_INT_REQUEST0
   4- COUNTER0_COMPARE_MATCH
   5- COUNTER0_OVERFLOW
   6- COUNTER_COMPARE_MATCH_B
   7- COUNTER1_OVERFLOW
   8- COUNTER1_CAPTURE_EVENT*/
#define ADC_u8_AUTO_TRIGGER_SOURCE_SELECTION	FREE_RUNNING_MODE

/*Choose either ENABLE OR DISABLE the ADC*/
#define ADC_u8_ENABLE_OR_DISABLE				ENABLE

#endif
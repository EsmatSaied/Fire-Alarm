/**************************************************/
/**************************************************/
/*************  Author: Esmat Saied    ************/
/*************   Component: ADC       ************/
/*************   Layer: MCAL           ************/
/*************   Version: 1.00         ************/
/**************************************************/
/**************************************************/

#ifndef ADC_PRIVATE_H_
#define ADC_PRIVATE_H_

/*Don't give zero value to any config. to avoid conflicts bet. that config. and any wrong value*/
#define AREF				1
#define AVCC				2
#define INTERNAL_2_56V		3

#define PRESCALER_SELECTION_BIT_MASK		0b11111000
#define CHANNEL_SELECTION_BIT_MASK			0b11100000
#define AUTO_TRIGGER_SOURCE_SELECTION_MASK	0b11111000

#define DIVIDE_BY_2			1
#define DIVIDE_BY_4			2
#define DIVIDE_BY_8			3
#define DIVIDE_BY_16		4
#define DIVIDE_BY_32		5
#define DIVIDE_BY_64		6
#define DIVIDE_BY_128		7

#define EIGHT_BITS			8
#define TEN_BITS			10

#define MANUAL_TRIGGER		1
#define AUTO_TRIGGER		2

#define FREE_RUNNING_MODE			0
#define ANALOG_COMPARATOR			1
#define EXTERNAL_INT_REQUEST0		2
#define COUNTER0_COMPARE_MATCH		3
#define COUNTER0_OVERFLOW			4
#define COUNTER_COMPARE_MATCH_B		5
#define COUNTER1_OVERFLOW			6
#define COUNTER1_CAPTURE_EVENT		7

#define ENABLE						1
#define DISABLE						0


#endif
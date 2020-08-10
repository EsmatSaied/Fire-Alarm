/**************************************************/
/**************************************************/
/*************  Author: Esmat Saied    ************/
/*************   Component: ADC       ************/
/*************   Layer: MCAL           ************/
/*************   Version: 1.00         ************/
/**************************************************/
/**************************************************/

#ifndef ADC_REGISTER_H_
#define ADC_REGISTER_H_

#define ADMUX			*((volatile u8*)0x27)	/*ADC Multiplexer selection reg*/
#define ADMUX_REFS1		7
#define ADMUX_REFS0		6
#define ADMUX_ADLAR		5

#define ADCSRA			*((volatile u8*)0x26)	/*ADC conrol and status reg*/
#define ADCSRA_ADEN		7						/*ENABLE*/
#define ADCSRA_ADSC		6						/*ADC conrol and status reg*/
#define ADCSRA_ADATE	5						/*AUTO TRIGGER ENABLE*/
#define ADCSRA_ADIF		4						/**/
#define ADCSRA_ADIE		3						/*ADC conrol and status reg*/

#define ADCH			*((volatile u8*)0x25)	/*ADC High data reg*/
#define ADCL			*((volatile u8*)0x24)	/*ADC Low data reg*/
#define SFIOR			*((volatile u8*)0x50)	/*Special sunction I/P O/P reg*/



#endif
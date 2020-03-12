/*
 * GPIO_INT.h
 *
 *  Created on: Jul 18, 2019
 *      Author: GEEK
 */

#ifndef GPIO_INT_H_
#define GPIO_INT_H_

/*
 * !Comment:
	Description: this Macros Define The Port Numbers .
 */
#define DIO_u8PORTA     0
#define DIO_u8PORTB     (DIO_u8PORTA+1)
#define DIO_u8PORTC     (DIO_u8PORTB+1)
#define DIO_u8PORTD     (DIO_u8PORTC+1)
#define DIO_u8PORTE     (DIO_u8PORTD+1)
#define DIO_u8PORTF     (DIO_u8PORTE+1)
#define DIO_u8PORTG     (DIO_u8PORTF+1)
#define DIO_u8PORTH     (DIO_u8PORTG+1)
#define DIO_u8PORTI     (DIO_u8PORTH+1)
#define DIO_u8PORTJ     (DIO_u8PORTI+1)
#define DIO_u8PORTK     (DIO_u8PORTJ+1)
#define DIO_u8PORTNB    (DIO_u8PORTK+1)

/*
 * !Comment:
	Description: this Macros Define The PIN Numbers .
 */
#define DIO_u8PIN0    0
#define DIO_u8PIN1    (DIO_u8PIN0 +1)
#define DIO_u8PIN2    (DIO_u8PIN1 +1)
#define DIO_u8PIN3    (DIO_u8PIN2 +1)
#define DIO_u8PIN4    (DIO_u8PIN3 +1)
#define DIO_u8PIN5    (DIO_u8PIN4 +1)
#define DIO_u8PIN6    (DIO_u8PIN5 +1)
#define DIO_u8PIN7    (DIO_u8PIN6 +1)
#define DIO_u8PIN8    (DIO_u8PIN7 +1)
#define DIO_u8PIN9    (DIO_u8PIN8 +1)
#define DIO_u8PIN10   (DIO_u8PIN9 +1)
#define DIO_u8PIN11   (DIO_u8PIN10+1)
#define DIO_u8PIN12   (DIO_u8PIN11+1)
#define DIO_u8PIN13   (DIO_u8PIN12+1)
#define DIO_u8PIN14   (DIO_u8PIN13+1)
#define DIO_u8PIN15   (DIO_u8PIN14+1)
#define DIO_u8PINNB   (DIO_u8PIN15+1)


/******************************************************************************/
/*                                                                            */
/*                            General Purpose I/O                             */
/*                                                                            */
/******************************************************************************/
/******************  Bits definition for GPIO_MODER register  *****************/
#define GPIO_MODER_MODER0                    ((uint32_t)0x00000003)
#define GPIO_MODER_MODER0_0                  ((uint32_t)0x00000001)
#define GPIO_MODER_MODER0_1                  ((uint32_t)0x00000002)

#define GPIO_MODER_MODER1                    ((uint32_t)0x0000000C)
#define GPIO_MODER_MODER1_0                  ((uint32_t)0x00000004)
#define GPIO_MODER_MODER1_1                  ((uint32_t)0x00000008)

#define GPIO_MODER_MODER2                    ((uint32_t)0x00000030)
#define GPIO_MODER_MODER2_0                  ((uint32_t)0x00000010)
#define GPIO_MODER_MODER2_1                  ((uint32_t)0x00000020)

#define GPIO_MODER_MODER3                    ((uint32_t)0x000000C0)
#define GPIO_MODER_MODER3_0                  ((uint32_t)0x00000040)
#define GPIO_MODER_MODER3_1                  ((uint32_t)0x00000080)

#define GPIO_MODER_MODER4                    ((uint32_t)0x00000300)
#define GPIO_MODER_MODER4_0                  ((uint32_t)0x00000100)
#define GPIO_MODER_MODER4_1                  ((uint32_t)0x00000200)

#define GPIO_MODER_MODER5                    ((uint32_t)0x00000C00)
#define GPIO_MODER_MODER5_0                  ((uint32_t)0x00000400)
#define GPIO_MODER_MODER5_1                  ((uint32_t)0x00000800)

#define GPIO_MODER_MODER6                    ((uint32_t)0x00003000)
#define GPIO_MODER_MODER6_0                  ((uint32_t)0x00001000)
#define GPIO_MODER_MODER6_1                  ((uint32_t)0x00002000)

#define GPIO_MODER_MODER7                    ((uint32_t)0x0000C000)
#define GPIO_MODER_MODER7_0                  ((uint32_t)0x00004000)
#define GPIO_MODER_MODER7_1                  ((uint32_t)0x00008000)

#define GPIO_MODER_MODER8                    ((uint32_t)0x00030000)
#define GPIO_MODER_MODER8_0                  ((uint32_t)0x00010000)
#define GPIO_MODER_MODER8_1                  ((uint32_t)0x00020000)

#define GPIO_MODER_MODER9                    ((uint32_t)0x000C0000)
#define GPIO_MODER_MODER9_0                  ((uint32_t)0x00040000)
#define GPIO_MODER_MODER9_1                  ((uint32_t)0x00080000)

#define GPIO_MODER_MODER10                   ((uint32_t)0x00300000)
#define GPIO_MODER_MODER10_0                 ((uint32_t)0x00100000)
#define GPIO_MODER_MODER10_1                 ((uint32_t)0x00200000)

#define GPIO_MODER_MODER11                   ((uint32_t)0x00C00000)
#define GPIO_MODER_MODER11_0                 ((uint32_t)0x00400000)
#define GPIO_MODER_MODER11_1                 ((uint32_t)0x00800000)

#define GPIO_MODER_MODER12                   ((uint32_t)0x03000000)
#define GPIO_MODER_MODER12_0                 ((uint32_t)0x01000000)
#define GPIO_MODER_MODER12_1                 ((uint32_t)0x02000000)

#define GPIO_MODER_MODER13                   ((uint32_t)0x0C000000)
#define GPIO_MODER_MODER13_0                 ((uint32_t)0x04000000)
#define GPIO_MODER_MODER13_1                 ((uint32_t)0x08000000)

#define GPIO_MODER_MODER14                   ((uint32_t)0x30000000)
#define GPIO_MODER_MODER14_0                 ((uint32_t)0x10000000)
#define GPIO_MODER_MODER14_1                 ((uint32_t)0x20000000)

#define GPIO_MODER_MODER15                   ((uint32_t)0xC0000000)
#define GPIO_MODER_MODER15_0                 ((uint32_t)0x40000000)
#define GPIO_MODER_MODER15_1                 ((uint32_t)0x80000000)


/******************  Bits definition for GPIO_OSPEEDR register  ***************/
#define GPIO_OSPEEDER_OSPEEDR0               ((uint32_t)0x00000003)
#define GPIO_OSPEEDER_OSPEEDR0_0             ((uint32_t)0x00000001)
#define GPIO_OSPEEDER_OSPEEDR0_1             ((uint32_t)0x00000002)

#define GPIO_OSPEEDER_OSPEEDR1               ((uint32_t)0x0000000C)
#define GPIO_OSPEEDER_OSPEEDR1_0             ((uint32_t)0x00000004)
#define GPIO_OSPEEDER_OSPEEDR1_1             ((uint32_t)0x00000008)

#define GPIO_OSPEEDER_OSPEEDR2               ((uint32_t)0x00000030)
#define GPIO_OSPEEDER_OSPEEDR2_0             ((uint32_t)0x00000010)
#define GPIO_OSPEEDER_OSPEEDR2_1             ((uint32_t)0x00000020)

#define GPIO_OSPEEDER_OSPEEDR3               ((uint32_t)0x000000C0)
#define GPIO_OSPEEDER_OSPEEDR3_0             ((uint32_t)0x00000040)
#define GPIO_OSPEEDER_OSPEEDR3_1             ((uint32_t)0x00000080)

#define GPIO_OSPEEDER_OSPEEDR4               ((uint32_t)0x00000300)
#define GPIO_OSPEEDER_OSPEEDR4_0             ((uint32_t)0x00000100)
#define GPIO_OSPEEDER_OSPEEDR4_1             ((uint32_t)0x00000200)

#define GPIO_OSPEEDER_OSPEEDR5               ((uint32_t)0x00000C00)
#define GPIO_OSPEEDER_OSPEEDR5_0             ((uint32_t)0x00000400)
#define GPIO_OSPEEDER_OSPEEDR5_1             ((uint32_t)0x00000800)

#define GPIO_OSPEEDER_OSPEEDR6               ((uint32_t)0x00003000)
#define GPIO_OSPEEDER_OSPEEDR6_0             ((uint32_t)0x00001000)
#define GPIO_OSPEEDER_OSPEEDR6_1             ((uint32_t)0x00002000)

#define GPIO_OSPEEDER_OSPEEDR7               ((uint32_t)0x0000C000)
#define GPIO_OSPEEDER_OSPEEDR7_0             ((uint32_t)0x00004000)
#define GPIO_OSPEEDER_OSPEEDR7_1             ((uint32_t)0x00008000)

#define GPIO_OSPEEDER_OSPEEDR8               ((uint32_t)0x00030000)
#define GPIO_OSPEEDER_OSPEEDR8_0             ((uint32_t)0x00010000)
#define GPIO_OSPEEDER_OSPEEDR8_1             ((uint32_t)0x00020000)

#define GPIO_OSPEEDER_OSPEEDR9               ((uint32_t)0x000C0000)
#define GPIO_OSPEEDER_OSPEEDR9_0             ((uint32_t)0x00040000)
#define GPIO_OSPEEDER_OSPEEDR9_1             ((uint32_t)0x00080000)

#define GPIO_OSPEEDER_OSPEEDR10              ((uint32_t)0x00300000)
#define GPIO_OSPEEDER_OSPEEDR10_0            ((uint32_t)0x00100000)
#define GPIO_OSPEEDER_OSPEEDR10_1            ((uint32_t)0x00200000)

#define GPIO_OSPEEDER_OSPEEDR11              ((uint32_t)0x00C00000)
#define GPIO_OSPEEDER_OSPEEDR11_0            ((uint32_t)0x00400000)
#define GPIO_OSPEEDER_OSPEEDR11_1            ((uint32_t)0x00800000)

#define GPIO_OSPEEDER_OSPEEDR12              ((uint32_t)0x03000000)
#define GPIO_OSPEEDER_OSPEEDR12_0            ((uint32_t)0x01000000)
#define GPIO_OSPEEDER_OSPEEDR12_1            ((uint32_t)0x02000000)

#define GPIO_OSPEEDER_OSPEEDR13              ((uint32_t)0x0C000000)
#define GPIO_OSPEEDER_OSPEEDR13_0            ((uint32_t)0x04000000)
#define GPIO_OSPEEDER_OSPEEDR13_1            ((uint32_t)0x08000000)

#define GPIO_OSPEEDER_OSPEEDR14              ((uint32_t)0x30000000)
#define GPIO_OSPEEDER_OSPEEDR14_0            ((uint32_t)0x10000000)
#define GPIO_OSPEEDER_OSPEEDR14_1            ((uint32_t)0x20000000)

#define GPIO_OSPEEDER_OSPEEDR15              ((uint32_t)0xC0000000)
#define GPIO_OSPEEDER_OSPEEDR15_0            ((uint32_t)0x40000000)
#define GPIO_OSPEEDER_OSPEEDR15_1            ((uint32_t)0x80000000)

/******************  Bits definition for GPIO_PUPDR register  *****************/
#define GPIO_PUPDR_PUPDR0                    ((uint32_t)0x00000003)
#define GPIO_PUPDR_PUPDR0_0                  ((uint32_t)0x00000001)
#define GPIO_PUPDR_PUPDR0_1                  ((uint32_t)0x00000002)

#define GPIO_PUPDR_PUPDR1                    ((uint32_t)0x0000000C)
#define GPIO_PUPDR_PUPDR1_0                  ((uint32_t)0x00000004)
#define GPIO_PUPDR_PUPDR1_1                  ((uint32_t)0x00000008)

#define GPIO_PUPDR_PUPDR2                    ((uint32_t)0x00000030)
#define GPIO_PUPDR_PUPDR2_0                  ((uint32_t)0x00000010)
#define GPIO_PUPDR_PUPDR2_1                  ((uint32_t)0x00000020)

#define GPIO_PUPDR_PUPDR3                    ((uint32_t)0x000000C0)
#define GPIO_PUPDR_PUPDR3_0                  ((uint32_t)0x00000040)
#define GPIO_PUPDR_PUPDR3_1                  ((uint32_t)0x00000080)

#define GPIO_PUPDR_PUPDR4                    ((uint32_t)0x00000300)
#define GPIO_PUPDR_PUPDR4_0                  ((uint32_t)0x00000100)
#define GPIO_PUPDR_PUPDR4_1                  ((uint32_t)0x00000200)

#define GPIO_PUPDR_PUPDR5                    ((uint32_t)0x00000C00)
#define GPIO_PUPDR_PUPDR5_0                  ((uint32_t)0x00000400)
#define GPIO_PUPDR_PUPDR5_1                  ((uint32_t)0x00000800)

#define GPIO_PUPDR_PUPDR6                    ((uint32_t)0x00003000)
#define GPIO_PUPDR_PUPDR6_0                  ((uint32_t)0x00001000)
#define GPIO_PUPDR_PUPDR6_1                  ((uint32_t)0x00002000)

#define GPIO_PUPDR_PUPDR7                    ((uint32_t)0x0000C000)
#define GPIO_PUPDR_PUPDR7_0                  ((uint32_t)0x00004000)
#define GPIO_PUPDR_PUPDR7_1                  ((uint32_t)0x00008000)

#define GPIO_PUPDR_PUPDR8                    ((uint32_t)0x00030000)
#define GPIO_PUPDR_PUPDR8_0                  ((uint32_t)0x00010000)
#define GPIO_PUPDR_PUPDR8_1                  ((uint32_t)0x00020000)

#define GPIO_PUPDR_PUPDR9                    ((uint32_t)0x000C0000)
#define GPIO_PUPDR_PUPDR9_0                  ((uint32_t)0x00040000)
#define GPIO_PUPDR_PUPDR9_1                  ((uint32_t)0x00080000)

#define GPIO_PUPDR_PUPDR10                   ((uint32_t)0x00300000)
#define GPIO_PUPDR_PUPDR10_0                 ((uint32_t)0x00100000)
#define GPIO_PUPDR_PUPDR10_1                 ((uint32_t)0x00200000)

#define GPIO_PUPDR_PUPDR11                   ((uint32_t)0x00C00000)
#define GPIO_PUPDR_PUPDR11_0                 ((uint32_t)0x00400000)
#define GPIO_PUPDR_PUPDR11_1                 ((uint32_t)0x00800000)

#define GPIO_PUPDR_PUPDR12                   ((uint32_t)0x03000000)
#define GPIO_PUPDR_PUPDR12_0                 ((uint32_t)0x01000000)
#define GPIO_PUPDR_PUPDR12_1                 ((uint32_t)0x02000000)

#define GPIO_PUPDR_PUPDR13                   ((uint32_t)0x0C000000)
#define GPIO_PUPDR_PUPDR13_0                 ((uint32_t)0x04000000)
#define GPIO_PUPDR_PUPDR13_1                 ((uint32_t)0x08000000)

#define GPIO_PUPDR_PUPDR14                   ((uint32_t)0x30000000)
#define GPIO_PUPDR_PUPDR14_0                 ((uint32_t)0x10000000)
#define GPIO_PUPDR_PUPDR14_1                 ((uint32_t)0x20000000)

#define GPIO_PUPDR_PUPDR15                   ((uint32_t)0xC0000000)
#define GPIO_PUPDR_PUPDR15_0                 ((uint32_t)0x40000000)
#define GPIO_PUPDR_PUPDR15_1                 ((uint32_t)0x80000000)

/*
 * !Comment:
	Description: this Macros Define The Protection Values .
 */

#define DIO_u8OK  0
#define DIO_u8NOK 1

/*
 * !Comment:
	Description: this Macros For Checking Conditions Of The State  .
 */
#define DIO_u8ModerInput    0      /*this macros for the INPUT Mode          */
#define DIO_u8ModerOutput   1     /*this macros for the OUTPUT Mode         */
#define DIO_u8ModerALFNM    2    /*this macros for the Alternate FN  Mode  */
#define DIO_u8ModerANAMOD   3   /*this macros for the ANALOG Mode         */
#define DIO_u8ModerNB       4

/*
 * !Comment:
	Description: this Macros For Checking Conditions Of the speed.
 */
#define DIO_u8LowSpeed     0
#define DIO_u8MedSpeed     1
#define DIO_u8HIGHSpeed    2
#define DIO_u8V.HIGHSpeed  3
#define DIO_u8Maxnb        4

/*
 * !Comment:
	Description: this Macros For Checking Conditions For Pull up .. Pull down.
 */
#define DIO_u8NoUpNoDown   0
#define DIO_u8PullUp       1
#define DIO_u8PullDown     2
#define DIO_u8Maxplldwnnb  4



/*
 * !Comment:
	Description: this Macros For Checking Conditions Of The PORT OUTPUT VALUE   .
 */
#define DIO_u8PortVolt0 0x00000000  /* this macros for the ZERO VOLT  */
#define DIO_u8PortVolt5 0x11111111 /*  this macros for the HIGH VOLT */

/*
 * !Comment:
	Description: this Macros For The Type Input   .
 */
#define DIO_u8OutTypePush 0
#define DIO_u8OutTypeOpen 1

#define DI0_u8PINVolt0   0
#define DI0_u8PINVolt5   1

/*
!Comment:
Description: this Function Sets the DIO Pin State
Input: 1)u8PortNbCpy-> the Port Index.            [A:B]
	   2)u8PinNbCpy -> the Pin number.            [0:15]
	   3)u8Modder   -> the required Pin Mode     ,Mapping value For Input,

	   4)u8 u8Speed -> the Required Speed        ,Mapping Value for Speed .

	   5)u8 u8PullUpPullDown-> the required pPullUpPullDown , Mapping Value For Mode .

Output: Function Error State.[0] for No Error, [1] if Error Existed
*/
u8 DIO_u32SetPinState(u8 u8PortNbCpy ,u8 u8PinNbCpy,u32 u8Modder, u32 u32Speed ,u32 u8PullUpPullDown );

/*
!Comment:
Description: this Function Sets the DIO Pin State
Input: 1)u8PortNbCpy -> the Port Index.            [A:B]
	   2)u8PinNbCpy  -> the Pin number.            [0:15]
	   3)u8VoltValue -> the value to be set  [0] volt out,
	   	   	   	   	   	   	   	   	   	   	 [1] volt inp,


Output: Function Error State.[0] for No Error, [1] if Error Existed
*/
u8 DIO_u32SetPinValue(u8 u8PortNbCpy ,u8 u8PinNbCpy , u8 u8VoltValue , u8 u8OutType );


/*
!Comment:
Description: this Function Gets the PIN  Value
Input: 1)u8PortNbCpy->the Port Index. [0:3]
	   2)u8PinNbCpy-> the Pin number. [0:7]
	   3)u8 *Pu8PinValueCpy-> the output .[0]for 0 Volt.
	   	   	   	   	   	   	   	   	   	  [1]for 1 Volt.
Output: Function Error State.[0] for No Error, [1] if Error Existed
*/
u8 DIO_u8GetPinVlaue(u8 u8PortNbCpy,  u8 u8PinNbCpy, u8 *Pu8PinValueCpy);


#endif /* GPIO_INT_H_ */

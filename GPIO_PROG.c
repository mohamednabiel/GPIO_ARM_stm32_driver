/*
 * GPIO_PROG.c
 *
 *  Created on: Jul 18, 2019
 *      Author: GEEK
 */

#include "std_types.h"

#include "utils.h"

#include "GPIOR.h"

#include "GPIO_INT.h"
/*
 *
 *
!Comment:
Description: this Function Sets the DIO Pin State
Input: 1)u8PortNbCpy-> the Port Index.            [A:B]
	   2)u8PinNbCpy -> the Pin number.            [0:15]
	   3)u8Modder   -> the required Pin Mode     ,[0]for Input,
												  [1]for output
												  [2]for AFMODE,
												  [3]for analog

	   4)u8 u8Speed -> the Required Speed         [0]for LowSpeed
	          	  	  	  	  	  	  	  	  	  [1]for MedSpeed
	          	  	  	  	  	  	  	  	  	  [2]for HigSpeed
	          	  	  	  	  	  	  	  	  	  [3]for V.HSpeed

	   5)u8 u8PullUpPullDown-> the required pPullUpPullDown [0]for NO
	   	   	   	   	   	   	   	   	   	   	   	   	   	   	[1]for PUllUp
	   	   	   	   	   	   	   	   	   	   	   	   	   	   	[2]for PulDwn

Output: Function Error State.[0] for No Error, [1] if Error Existed
*/
u8 DIO_u32SetPinState(u8 u8PortNbCpy ,u8 u8PinNbCpy,u32 u8Modder, u32 u32Speed ,u32 u8PullUpPullDown )
{

	/*Local Varibales*/

		/*Error State*/
		u8 u8ErrLoc = DIO_u8OK;

		/*check that port number is in range*/
		if(u8PortNbCpy >= DIO_u8PORTNB)
			{
				/*Set the error State of the function*/
				u8ErrLoc = DIO_u8NOK;
			}
		/*check that pin number is in range*/
		else if(u8PinNbCpy >= DIO_u8PINNB)
			{
				/*Set the error State of the function*/
				u8ErrLoc = DIO_u8NOK;
			}

		/*All inputs are in range*/
		else
		{
			/*Clock enabling*/
			Set_Bit( RCC_AHB1ENR , 0);   /* PortA Clock Enable   */
			Set_Bit( RCC_AHB1ENR , 1);  /*  PortB Clock Enable  */
			Set_Bit( RCC_AHB1ENR , 2); /*   PortC Clock Enable */
			u8ErrLoc = DIO_u8OK;

			if(u8PortNbCpy == DIO_u8PORTA)
			{
				switch(u8PinNbCpy)
				{
				case DIO_u8PIN0  :
					MODER_PORTA   = u8Modder         ;
					OSPEEDR_PORTA = u32Speed         ;
					PUPDR_PORTA   = u8PullUpPullDown ;
					break;
				case DIO_u8PIN1  :
					MODER_PORTA   = u8Modder         ;
					OSPEEDR_PORTA = u32Speed         ;
					PUPDR_PORTA   = u8PullUpPullDown ;

					break;
				case DIO_u8PIN2  :
					MODER_PORTA   = u8Modder         ;
					OSPEEDR_PORTA = u32Speed         ;
					PUPDR_PORTA   = u8PullUpPullDown ;
					break;
				case DIO_u8PIN3  :
					MODER_PORTA   = u8Modder         ;
					OSPEEDR_PORTA = u32Speed         ;
					PUPDR_PORTA   = u8PullUpPullDown ;
					break;
				case DIO_u8PIN4  :
					MODER_PORTA   = u8Modder         ;
					OSPEEDR_PORTA = u32Speed         ;
					PUPDR_PORTA   = u8PullUpPullDown ;
					break;
				case DIO_u8PIN5  :
					MODER_PORTA   = u8Modder         ;
					OSPEEDR_PORTA = u32Speed         ;
					PUPDR_PORTA   = u8PullUpPullDown ;
					break;
				case DIO_u8PIN6  :
					MODER_PORTA   = u8Modder         ;
					OSPEEDR_PORTA = u32Speed         ;
					PUPDR_PORTA   = u8PullUpPullDown ;
					break;
				case DIO_u8PIN7  :
					MODER_PORTA   = u8Modder         ;
					OSPEEDR_PORTA = u32Speed         ;
					PUPDR_PORTA   = u8PullUpPullDown ;
					break;
				case DIO_u8PIN8  :
					MODER_PORTA   = u8Modder         ;
					OSPEEDR_PORTA = u32Speed         ;
					PUPDR_PORTA   = u8PullUpPullDown ;
					break;
				case DIO_u8PIN9  :
					MODER_PORTA   = u8Modder         ;
					OSPEEDR_PORTA = u32Speed         ;
					PUPDR_PORTA   = u8PullUpPullDown ;
					break;
				case DIO_u8PIN10 :
					MODER_PORTA   = u8Modder         ;
					OSPEEDR_PORTA = u32Speed         ;
					PUPDR_PORTA   = u8PullUpPullDown ;
					break;
				case DIO_u8PIN11 :
					MODER_PORTA   = u8Modder         ;
					OSPEEDR_PORTA = u32Speed         ;
					PUPDR_PORTA   = u8PullUpPullDown ;
					break;
				case DIO_u8PIN12 :
					MODER_PORTA   = u8Modder         ;
					OSPEEDR_PORTA = u32Speed         ;
					PUPDR_PORTA   = u8PullUpPullDown ;
					break;
				case DIO_u8PIN13 :
					MODER_PORTA   = u8Modder         ;
					OSPEEDR_PORTA = u32Speed         ;
					PUPDR_PORTA   = u8PullUpPullDown ;
					break;
				case DIO_u8PIN14 :
					MODER_PORTA   = u8Modder         ;
					OSPEEDR_PORTA = u32Speed         ;
					PUPDR_PORTA   = u8PullUpPullDown ;
					break;
				case DIO_u8PIN15 :
					MODER_PORTA   = u8Modder         ;
					OSPEEDR_PORTA = u32Speed         ;
					PUPDR_PORTA   = u8PullUpPullDown ;
					break;
				}
			}
			else if(u8PortNbCpy == DIO_u8PORTB)
			{
				switch(u8PinNbCpy)
				{
				case DIO_u8PIN0  :
					MODER_PORTB   = u8Modder         ;
					OSPEEDR_PORTB = u32Speed         ;
					PUPDR_PORTB   = u8PullUpPullDown ;
					break;
				case DIO_u8PIN1  :
					MODER_PORTB   = u8Modder         ;
					OSPEEDR_PORTB = u32Speed         ;
					PUPDR_PORTB   = u8PullUpPullDown ;
					break;
				case DIO_u8PIN2  :
					MODER_PORTB   = u8Modder         ;
					OSPEEDR_PORTB = u32Speed         ;
					PUPDR_PORTB   = u8PullUpPullDown ;
					break;
				case DIO_u8PIN3  :
					MODER_PORTB   = u8Modder         ;
					OSPEEDR_PORTB = u32Speed         ;
					PUPDR_PORTB   = u8PullUpPullDown ;
					break;
				case DIO_u8PIN4  :
					MODER_PORTB   = u8Modder         ;
					OSPEEDR_PORTB = u32Speed         ;
					PUPDR_PORTB   = u8PullUpPullDown ;
					break;
				case DIO_u8PIN5  :
					MODER_PORTB   = u8Modder         ;
					OSPEEDR_PORTB = u32Speed         ;
					PUPDR_PORTB   = u8PullUpPullDown ;
					break;
				case DIO_u8PIN6  :
					MODER_PORTB   = u8Modder         ;
					OSPEEDR_PORTB = u32Speed         ;
					PUPDR_PORTB   = u8PullUpPullDown ;
					break;
				case DIO_u8PIN7  :
					MODER_PORTB   = u8Modder         ;
					OSPEEDR_PORTB = u32Speed         ;
					PUPDR_PORTB   = u8PullUpPullDown ;
					break;
				case DIO_u8PIN8  :
					MODER_PORTB   = u8Modder         ;
					OSPEEDR_PORTB = u32Speed         ;
					PUPDR_PORTB   = u8PullUpPullDown ;
					break;
				case DIO_u8PIN9  :
					MODER_PORTB   = u8Modder         ;
					OSPEEDR_PORTB = u32Speed         ;
					PUPDR_PORTB   = u8PullUpPullDown ;
					break;
				case DIO_u8PIN10 :
					MODER_PORTB   = u8Modder         ;
					OSPEEDR_PORTB = u32Speed         ;
					PUPDR_PORTB   = u8PullUpPullDown ;
					break;
				case DIO_u8PIN11 :
					MODER_PORTB   = u8Modder         ;
					OSPEEDR_PORTB = u32Speed         ;
					PUPDR_PORTB   = u8PullUpPullDown ;
					break;
				case DIO_u8PIN12 :
					MODER_PORTB   = u8Modder         ;
					OSPEEDR_PORTB = u32Speed         ;
					PUPDR_PORTB   = u8PullUpPullDown ;
					break;
				case DIO_u8PIN13 :
					MODER_PORTB   = u8Modder         ;
					OSPEEDR_PORTB = u32Speed         ;
					PUPDR_PORTB   = u8PullUpPullDown ;
					break;
				case DIO_u8PIN14 :
					MODER_PORTB   = u8Modder         ;
					OSPEEDR_PORTB = u32Speed         ;
					PUPDR_PORTB   = u8PullUpPullDown ;
					break;
				case DIO_u8PIN15 :
					MODER_PORTB   = u8Modder         ;
					OSPEEDR_PORTB = u32Speed         ;
					PUPDR_PORTB   = u8PullUpPullDown ;
					break;
			}
			}
		}
	return (u8ErrLoc);
}
/*
!Comment:
Description: this Function Sets the DIO Pin State
Input: 1)u8PortNbCpy-> the Port Index.            [A:B]
	   2)u8PinNbCpy -> the Pin number.            [0:15]
	   3)u8VoltValue -> the value to be set  [0] volt out,
	   	   	   	   	   	   	   	   	   	   	 [1] volt inp,

Output: Function Error State.[0] for No Error, [1] if Error Existed
*/
u8 DIO_u32SetPinValue(u8 u8PortNbCpy , u8 u8PinNbCpy  , u8 u8VoltValue ,u8 u8OutType )
{

	/*Local Varibales*/

		/*Error State*/
		u8 u8ErrLoc = DIO_u8OK;

		/*check that port number is in range*/
		if(u8PortNbCpy >= DIO_u8PORTNB)
			{
				/*Set the error State of the function*/
				u8ErrLoc = DIO_u8NOK;
			}
		/*check that pin number is in range*/
		else if(u8PinNbCpy >= DIO_u8PINNB)
			{
				/*Set the error State of the function*/
				u8ErrLoc = DIO_u8NOK;
			}
		else
		{
			u8ErrLoc = DIO_u8OK;
			if(u8VoltValue == DI0_u8PINVolt0)
			{
				switch(u8PortNbCpy)
				{
				case DIO_u8PORTA :
					Set_Bit( BSRRH_PORTA  , (u8PinNbCpy+16));
					break;

				case DIO_u8PORTB :
					break;
				}
			}
			else if(u8VoltValue == DI0_u8PINVolt5)
			{
				switch(u8PortNbCpy)
				{
				case DIO_u8PORTA :
					if(u8OutType==DIO_u8OutTypePush)
					{
					Set_Bit( BSRRL_PORTA, u8PinNbCpy);
					}
					else if(u8OutType==DIO_u8OutTypeOpen)
					{
						Set_Bit( OTYPER_PORTA , u8PinNbCpy);
						Set_Bit( BSRRL_PORTA  , u8PinNbCpy);
					}
					break;

				case DIO_u8PORTB :
					if(u8OutType==DIO_u8OutTypePush)
					{
					Set_Bit( BSRRL_PORTB, u8PinNbCpy);
					}
					else if(u8OutType==DIO_u8OutTypeOpen)
					{
						Set_Bit( OTYPER_PORTB , u8PinNbCpy);
						Set_Bit( BSRRL_PORTB  , u8PinNbCpy);
					}
					break;
				}
			}
		}
	return (u8ErrLoc);
}
/*
!Comment:
Description: this Function Gets the PIN  Value
Input: 1)u8PortNbCpy->the Port Index. [0:3]
	   2)u8PinNbCpy-> the Pin number. [0:7]
	   3)u8 *Pu8PinValueCpy-> the output .[0]for 0 Volt.
	   	   	   	   	   	   	   	   	   	  [1]for 1 Volt.
Output: Function Error State.[0] for No Error, [1] if Error Existed
*/
u8 DIO_u8GetPinVlaue(u8 u8PortNbCpy,  u8 u8PinNbCpy, u8 *Pu8PinValueCpy)
{
	/*Local Varibales*/

		/*Error State*/
		u8 u8ErrLoc = DIO_u8OK;

		/*check that port number is in range*/
		if(u8PortNbCpy >= DIO_u8PORTNB)
			{
			/*Set the error State of the function*/
			u8ErrLoc = DIO_u8NOK;
			}
			/*check that pin number is in range*/
		else if(u8PinNbCpy >= DIO_u8PINNB)
			{
			/*Set the error State of the function*/
			u8ErrLoc = DIO_u8NOK;
			}
		else
		{
			u8 u8ErrLoc = DIO_u8OK;
			switch(u8PortNbCpy)
					{
					case DIO_u8PORTA:
						(*Pu8PinValueCpy)=Get_Bit(IDR_PORTA,u8PinNbCpy);
						break;
					case DIO_u8PORTB:
						(*Pu8PinValueCpy)=Get_Bit(IDR_PORTB,u8PinNbCpy);
						break;


		}
}

		return(u8ErrLoc);
}




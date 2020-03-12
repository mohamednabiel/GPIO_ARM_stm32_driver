/*
 * utils.h
 *
 *  Created on: Jul 18, 2019
 *      Author: GEEK
 */

#ifndef UTILS_H_
#define UTILS_H_


#define Set_Bit(reg, n) (reg |= (1<<n))
#define Rst_Bit(reg, n) (reg &=  ~(1<<n))
#define Tog_Bit(reg, n) (reg ^=(1<<n))
#define Get_Bit(reg, n) (reg = (reg<<n)&1)

#define Set_Nbl_L(reg) (reg = reg | (0x0f))
#define Set_Nbl_H(reg) (reg = reg | (0xf0))

#define Rst_Nbl_L(reg) (reg &= ~(0xf0))


#define Rst_Nbl_H(reg) (reg &= ~(0xf0))

#define Get_Nbl_L(reg) (reg &= ~(0xf0))
#define Get_Nbl_H(reg) (reg &= ~(0xf0))
#define Set_Nbl_value_L(reg,value) (reg &= ~(0xf0))

#define Set_Nbl_value_H(reg,value) (reg &= ~(0xf0))

#endif /* UTILS_H_ */

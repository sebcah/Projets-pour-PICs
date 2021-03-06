
/*  Name     : main.c
 *  Purpose  : Main file for i2c code for PIC16F628A.
 *  Author   : M.Saeed Yasin
 *  Date     : 20-03-14
 *  Revision : None
 */
#include "Includes.h"
#include "config.h" // File with Configuration bits

// Config word
//__CONFIG(FOSC_HS & WDTE_OFF & PWRTE_ON & MCLRE_ON & BOREN_ON & LVP_OFF & CPD_OFF & CP_OFF);

// Main function
void main()
{	
	unsigned char RxByte = 0;
    
	InitI2C();					// Initialize i2c pins
    
	I2C_Start();				// Send start bit on i2c
	I2C_Write_Byte(0xA0);		// Send 0xA0 on i2c
	RxByte = I2C_Read_Byte();	// Read value from i2c
	I2C_Send_ACK();				// Send ACK bit on i2c
	I2C_Stop();					// Send stop bit on i2c
	
	while(1)
	{
		
		
	}
}
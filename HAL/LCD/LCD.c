#include "LCD.h"
#include <util/delay.h>  // so i can use _dealy_ms() function



static void LCD_WriteCommand(UINT8 Command)
{
	GPIO_WRITE_PIN_VALUE(RS_PORT, RS_PIN, 0);  // so i can write command
	GPIO_WRITE_PIN_VALUE(RW_PORT, RW_PIN, 0); //  to tell the lcd that i am going to write data
	GPIO_WRITE_PORT_VALUE(LCD_PORT, Command); // passing the command through the lcd_port
	GPIO_WRITE_PIN_VALUE(EN_PORT, EN_PIN, 1); // activating the enable
	_delay_ms(2);
	GPIO_WRITE_PIN_VALUE(EN_PORT, EN_PIN, 0); // disabling the enable
	_delay_ms(2);
}

void LCD_Init(void)
{


}

void LCD_WriteData(UINT8 Data)
{
	GPIO_WRITE_PIN_VALUE(RS_PORT,RS_PIN,1 );  //putting 1 on rs pin so i can write data on lcd 
	GPIO_WRITE_PIN_VALUE(RW_PORT,RW_PIN,0);   

	GPIO_WRITE_PORT_VALUE(LCD_PORT , Data) ;
	GPIO_WRITE_PIN_VALUE(EN_PORT,EN_PIN,1);
	_delay_ms(2);                //  i write this  #include <util/delay.h>    so we can use delay function.... 
	GPIO_WRITE_PIN_VALUE(EN_PORT,EN_PIN,0);
	_delay_ms(2);    
}




void LCD_WriteSentence(UINT8 *PtrSentance)
{
	

}




void LCD_Clear(void)
{

	

}

#ifndef __OLED_H
#define __OLED_H

#include "REG51.h"		  	 
 
#define  u8 unsigned char 
#define  u16 unsigned int
#define  u32 unsigned int
	
#define OLED_CMD  0	//д����
#define OLED_DATA 1	//д����

sbit OLED_SCL=P1^4;//SCL
sbit OLED_SDA=P1^3;//SDA
sbit OLED_RES =P1^2;//RES
sbit OLED_DC =P1^1;//DC
sbit OLED_CS=P1^0; //CS

//-----------------OLED�˿ڶ���----------------

#define OLED_SCL_Clr() OLED_SCL=0
#define OLED_SCL_Set() OLED_SCL=1

#define OLED_SDA_Clr() OLED_SDA=0
#define OLED_SDA_Set() OLED_SDA=1

#define OLED_RES_Clr() OLED_RES=0
#define OLED_RES_Set() OLED_RES=1

#define OLED_DC_Clr() OLED_DC=0
#define OLED_DC_Set() OLED_DC=1

#define OLED_CS_Clr()  OLED_CS=0
#define OLED_CS_Set()  OLED_CS=1


//OLED�����ú���
void delay_ms(unsigned int ms);
void OLED_ColorTurn(u8 i);
void OLED_DisplayTurn(u8 i);
void OLED_WR_Byte(u8 dat,u8 cmd);
void OLED_Set_Pos(u8 x, u8 y);
void OLED_Display_On(void);
void OLED_Display_Off(void);
void OLED_Clear(void);
void OLED_Init(void);
void OLED_print(u8 *p);

#endif  
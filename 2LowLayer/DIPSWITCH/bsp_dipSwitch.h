/******************************************************************************

                  版权所有 (C), 2013-2023, 深圳博思高科技有限公司

 ******************************************************************************
  文 件 名   : bsp_dipSwitch.h
  版 本 号   : 初稿
  作    者   : 张舵
  生成日期   : 2019年12月23日
  最近修改   :
  功能描述   : 拨码开头驱动头文件
  函数列表   :
  修改历史   :
  1.日    期   : 2019年12月23日
    作    者   : 张舵
    修改内容   : 创建文件

******************************************************************************/
#ifndef __BSP_DIPSWITCH_H
#define __BSP_DIPSWITCH_H

/*----------------------------------------------*
 * 包含头文件                                   *
 *----------------------------------------------*/
 #include "sys.h" 

 

/*----------------------------------------------*
 * 宏定义                                       *
 *----------------------------------------------*/
/* 拨码开关对应的RCC时钟 */
#define RCC_ALL_DIPSWITCH     RCC_AHB1Periph_GPIOG     

#define GPIO_PORT_DIPSWITCH       GPIOG

     
#define GPIO_PIN_DIP0       GPIO_Pin_7
#define GPIO_PIN_DIP1       GPIO_Pin_6
#define GPIO_PIN_DIP2       GPIO_Pin_5
#define GPIO_PIN_DIP3       GPIO_Pin_4


#define GPIO_PIN_SW1       GPIO_Pin_2
#define GPIO_PIN_SW2       GPIO_Pin_15


#define DIP0        PGin(7)   	
#define DIP1 		PGin(6)		
#define DIP2 		PGin(5)		
#define DIP3		PGin(4)		



//#define SW2_LOW()	    GPIOG->BSRRL = GPIO_Pin_2
//#define SW2_HI()	    GPIOG->BSRRH = GPIO_Pin_2

//#define SW1_LOW()	    GPIOD->BSRRL = GPIO_Pin_15
//#define SW1_HI()	    GPIOD->BSRRH = GPIO_Pin_15

#define SW2_LOW()	    GPIO_ResetBits(GPIOG, GPIO_Pin_2)
#define SW2_HI()	    GPIO_SetBits(GPIOG, GPIO_Pin_2)

#define SW1_LOW()	    GPIO_ResetBits(GPIOD, GPIO_Pin_15)
#define SW1_HI()	    GPIO_SetBits(GPIOD, GPIO_Pin_15)




/*----------------------------------------------*
 * 常量定义                                     *
 *----------------------------------------------*/

/*----------------------------------------------*
 * 模块级变量                                   *
 *----------------------------------------------*/

/*----------------------------------------------*
 * 内部函数原型说明                             *
 *----------------------------------------------*/

void bsp_dipswitch_init(void);
int16_t bsp_dipswitch_read(void);
void bsp_sw_init(void);



#endif


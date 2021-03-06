/********************************************************************************
  * @工程名  基于STM8S103F的程控加热器											       
  * @作者    刘蓁															   
  * @版本    1.0															   
  * @日期    2018/4														       
  * @摘要    简单PID		
  *******************************************************************************/

/******************************************************************************
包含头文件
******************************************************************************/ 
#include "stm8s.h"
#include "key.h"
#include "init.h"
#include "ds18b20.h"
#include "value_get.h"
#include "oled_iic.h"
#include "heater.h"

/******************************************************************************
数据定义
******************************************************************************/
u16 count = 0, p=0, fan_flag = 0, speed=0; 
// 计数       功率  风扇是否打开  风扇速度
float temperature_read, temperature = 40;   
//    当前温度          目标温度  



/*****************************************************************************
  * @function  : main
  * @brief     : 主函数
  * @note      : STM8S103K
  * @param     : null
  * @retval    : null           
******************************************************************************/

int main( void )
{          

  
   
     
      Init_All();                 //初始化所有

      

      while(1)
      {      
        

           

        
           Key_Get();              //扫描键值
           Heater_Init();          //控制加热器和风扇
           Display();              //oled显示
          

      }
   
}


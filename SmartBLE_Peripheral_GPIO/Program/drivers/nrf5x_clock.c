/*=====================================================================================================*/
/*=====================================================================================================*/
#include "nrf5x_system.h"
#include "nrf5x_clock.h"

#include "nrf_drv_clock.h"
/*====================================================================================================*/
/*====================================================================================================*
**函數 : CLOCK_Config
**功能 : CLOCK Config
**輸入 : None
**輸出 : None
**使用 : CLOCK_Config();
**====================================================================================================*/
/*====================================================================================================*/
void Clock_Config( void )
{
  nrf_drv_clock_init();
}
/*=====================================================================================================*/
/*=====================================================================================================*/

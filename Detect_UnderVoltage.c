/*********************************************************************************
 *
 *                      ********************************
 *                      *                              *
 *                      *     Detect_UnderVolatge.c
 *                      *                              *
 *                      ********************************
 *
 ********************************************************************************
 *
 * Author(s): Subhakanta Swain
 *
 ********************************************************************************
 * Description:
 *
 * Detect UnderVoltage when the Volatge value is less than threshold for time
 *
 *
 ********************************************************************************/
/* included library and header file: */
#include <stdio.h>
#include "Faults.h"
#include <stdbool.h>

bool UnderVoltage(float voltage, int time)
{
 
 //Checking the Voltage value if less than K_UV_MAX(define in Faults.h) for time 20
 if(voltage<K_UV_MAX && time==20)
 {
   return 1; 
 } 
 else
   return 0;
}

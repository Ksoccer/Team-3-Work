/*********************************************************************************
 *
 *                      ********************************
 *                      *                              *
 *                      *     Detect_UnderCurrent.c
 *                      *                              *
 *                      ********************************
 *
 ********************************************************************************
 *
 * Author(s): Tae Kim
 *
 ********************************************************************************
 * Description:
 *
 * Detect UnderCurrent when the Current value is less than threshold for time
 *
 *
 ********************************************************************************/
/* included library and header file: */
#include <stdio.h>
#include "Faults.h"
#include <stdbool.h>

bool UnderCurrent(float current, int time)
{
  //Checking the Current value if less than K_UI_MIN(define in Faults.h) for time 20
  if(current<K_UI_MIN && time==20)
  {
    //Return "True" (Fault is detected)
    return 1;
  } 
  else
    //Return "False" (Fault is not detected)
    return 0;
}

/* #include <stdio.h>
#include "Faults.h"

bool UnderCurrent(int PHA_I,int PHB_I,int PHC_I, int time)
{
   int PHUI;
   int flag_undercurrent;
 
    if (PHA_I >= PHB_I) {
        PHUI = PHA_I;
    } else {
        PHUI = PHB_I;
    }
    if (PHUI >= PHC_I) {
    } else {
       PHUI = PHC_I;
    }
 
 if(PHUI<K_UI_MIN && time==20)
 {
   return = 1; 
 } 
 else()
   return = 0;
}
*/
#include <stdio.h>
#include "Faults.h"
#include <stdbool.h>

bool OverCurrent(float Current, int time) /* Brings in values from bolean OverCurrent of current and time. */
{

 if(Current>K_OC_MAX && time==20) /* checks is current value is greater than the max allowable current and if time is set to 20. If current greater than max returns a true and reports the fault */
 {
   return 1; 
 }
 else
 {
   return 0;
 }
}

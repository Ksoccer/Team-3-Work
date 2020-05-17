#include <stdio.h>
#include "Faults.h"

bool UnderVoltage(int PHA_V,int PHB_V,int PHC_V, int time)
{
   int PHUV;
   int flag_undervolatge;
 
    if (PHA_V <= PHB_V) {
        PHUV = PHA_V;
    } else {
        PHUV = PHB_V;
    }
    if (PHUV <= PHC_V) {
    } else {
       PHUV = PHC_V;
    }
 
 if(PHUV<K_UV_MAX && time==20)
 {
   return = 1; 
 } 
 else()
   return = 0;
}

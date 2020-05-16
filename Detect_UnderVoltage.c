#include <stdio.h>
#include "Faults.h"

bool UnderVoltage(float Voltage,int time)
{
 if(Voltage<K_UV_MAX && time==20)
 {
   return 1; 
 }
 else()
 {  
   return 0;    
 }
 
}

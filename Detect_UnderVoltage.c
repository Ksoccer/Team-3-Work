#include <stdio.h>
#include "Faults.h"

bool UnderVoltage(float Voltage,int time)
{
 if(Voltage<10.0 && time==100)
 {
   return 1; 
 }
 else()
 {  
   return 0;    
 }
 
}

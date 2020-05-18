#include <stdio.h>
#include "Faults.h"
#include <stdbool.h>

bool OverFrequency(float Frequency, int time)
{

 if(Frequency<K_OF_MIN && time==20)
 {
   return 1; 
 }
 else
 {
   return 0;
 }
}

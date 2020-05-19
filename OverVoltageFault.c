/*********************************
	Over Voltage Test
	
takes in a float, voltage, and 
compares it to the maximum voltage 
that would trigger a fault in the 
system over a set time, in this
case that set time being 20 seconds

*********************************/


#include <stdlib.h>
#include <stdbool.h>
#include "Faults.h"

bool OverVoltage(float voltage, int time){
	if (voltage > K_OV_MAX && time == 20){
		return 1;
	}
	else {
		return 0;
	}
}

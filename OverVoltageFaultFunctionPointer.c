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
#include <stdio.h>
#include "Faults.h"

int *Tpoint;
float *Vpoint;
bool *Fpoint;

int time;
float voltage;


bool OverVoltage(voltage, time){
	if (voltage > K_OV_MAX && time == 20){
		return 1;
	}
	else {
		return 0;
	}
}

Fpoint = &OverVoltage();

int pointers(){

	printf("Address stored in Function pointer variable: %x\n", Fpoint );
	
	
}

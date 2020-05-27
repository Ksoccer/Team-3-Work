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


//int time;
//float voltage;

int pointers(){
	
 	printf("Address stored in time pointer variable: %p\n", Tpoint );
	printf("Address stored in voltage pointer variable: %p\n", Vpoint );
	printf("Value stored in time pointer variable: %d\n", *Tpoint );
	printf("Value stored in voltage pointer variable: %f\n", *Vpoint );
	return 1;
}

bool OverVoltage(float voltage,int time){
	Tpoint = &time;
	Vpoint = &voltage;
	pointers();
	if (voltage > K_OV_MAX && time == 20){
		return 1;
	}
	else {
		return 0;
	}
	
	
}




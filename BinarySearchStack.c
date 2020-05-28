#include <stdio.h>
#include <stdlib.h>
#include "Faults.h"


//searches a sorted array for int x
int binarysearch (int FaultArray[], int beginning, int end, int x){
	int middle;
	while (beginning <= end){
	//checks if int is the middle integer in the array
		if (FaultArray [middle == x]){
		
			return middle;
			
		}
		//checks if the int x is in the end half of the array
		else if ( FaultArray[middle] < x ){
		
			beginning = middle + 1;
		
		}
		// checks if int x is in the beginning half of the array
		else if ( FaultArray[middle] > x){
		
			end  = middle - 1;
		
		}
	} 
	//if int x is not in the array
	return -1;
}


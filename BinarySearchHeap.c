#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include "Faults.h"



//searches a sorted array for int y
void HeapSearch (int *HeapArray, int HeapBeginning, int HeapEnd, int y){
	int HeapMiddle;
	while (HeapBeginning <= HeapEnd){
	//checks if int is the middle integer in the array
		if (y == *(HeapArray + HeapMiddle)){
		
			return HeapMiddle;
			
		}
		//checks if the int y is in the end half of the array
		else if (y > *(HeapArray + HeapMiddle) ){
		
			HeapBeginning = HeapMiddle + 1;
		
		}
		// checks if int y is in the beginning half of the array
		else if ( y < *(HeapArray + HeapMiddle) ){
		
			HeapEnd  = HeapMiddle - 1;
		
		}
	} 
	//if int y is not in the array
	return -1;
}

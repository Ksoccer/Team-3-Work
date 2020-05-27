#include <stdio>
#include <stdlib>
#include "Faults.h"



//searches a sorted array for int y
int HeapSearch (int *HeapArray, int HeapBeginning, int HeapEnd, int y){
	while (HeapBeginning <= HeapEnd){
	//identifies the middle of the array
		int HeapMiddle = HeapBeginning + (HeapEnd - HeapBeginning) / 2;
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

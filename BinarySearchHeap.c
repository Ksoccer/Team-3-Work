#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include "Faults.h"

void *ptrheap;

//searches a sorted array for int y
void *HeapSearch (int y){
	int array[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110};
	int heapsize = sizeof(array)/sizeof(array[0]);
	int *HeapArray = (int*) malloc (heapsize*sizeof(int));
	for (int i = 0; i <= heapsize; i++){
		*(HeapArray + i) = array [i];
	}
	int HeapBeginning  = *(HeapArray + 0);
	int HeapEnd = *(HeapArray + sizeof(*(HeapArray))/sizeof(*(HeapArray + 0)));
	int HeapMiddle = *(HeapArray + HeapEnd/2);
	while (HeapBeginning <= HeapEnd){
	//checks if int is the middle integer in the array
		if (y == *(HeapArray + HeapMiddle)){
		
			printf("the value %d is in the array", HeapMiddle);
			
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
	ptrheap = &HeapMiddle;
	//if int y is not in the array
	printf("the value is not in the array");
	free(HeapArray);
	return ptrheap;
}

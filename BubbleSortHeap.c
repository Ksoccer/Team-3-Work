#include<stdio.h>
#include<stdbool.h>
#include "Faults.h"
#include <stdlib.h>

// A function to implement bubble sort 
void bubbleSort_Heap(int arr[], int n){   
 printf("Before Sorting of array: \n"); 
 printArray(arr, n);	
 bubbleSort(arr, n); 
 printf("After BubbleSort using Heap array: \n"); 
 printArray(arr, n);
    
}

#include<stdio.h>
#include<stdbool.h>
#include "Faults.h"

void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 

/* Function to print an array */
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
} 
  
// A function to implement bubble sort 
void bubbleSort(int arr[], int n) 
{ 
   
   int i, j; 
   for (i = 0; i < n-1; i++)       
  
       // Last i elements are already in place    
       for (j = 0; j < n-i-1; j++)  
           if (arr[j] > arr[j+1]) 
              swap(&arr[j], &arr[j+1]); 
} 

// A function to implement bubble sort 
void bubbleSort_Stack(int arr[]){ 
    
 int n = sizeof(arr)/sizeof(arr[0]); 
 printf("Before Sorting of array: \n"); 
 printArray(arr, n);	
 bubbleSort(arr, n); 
 printf("After BubbleSort array: \n"); 
 printArray(arr, n);
    
}

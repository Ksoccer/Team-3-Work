#include<stdio.h>
#include<stdbool.h>
#include "Faults.h"
#include <stdlib.h>

// Function to print an array
void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}

void insertionSort(int array[], int size) {
  for (int step = 1; step < size; step++) {
    int key = array[step];
    int j = step - 1;

    // Compare key with each element on the left of it until an element smaller than
    // it is found.
    // For descending order, change key<array[j] to key>array[j].
    while (key < array[j] && j >= 0) {
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = key;
  }
}

void insertionSort_Stack(int arr[], int n){ 
 printf("Before Sorting of array: \n"); 
 printArray(arr, n);	
 insertionSort(arr, n); 
 printf("After InsertionSort array: \n"); 
 printArray(arr, n);
}

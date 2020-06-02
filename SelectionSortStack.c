#include <stdio.h>
#include <stdbool.h>
#include "Faults.h"
#include <stdlib.h>


#define MAX 7


//Fucntion for pointers practice 
void newmgen(int *pm, int *pl)
{ 
    int temp = *pm; //stores location of variable pm 
    int temp1 = *pl;  //stores location of pl
	int k;
	k = 9;
	pl = &k; //updates the location of variable pl to the value of k, which is 9
	printf("location of pm is %d\n", temp);
	printf(" old location of pl is %d\n", temp1);
	printf("new location of pl is %d\n", pl);
} 

*******************************************************
// crates the new matrix stored in Stack

void printArray(int arrn[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", arrn[i]); 
    printf("\n"); 
} 

*****************************************************

void printline(int count) {
   int i;
	
   for(i = 0;i < count-1;i++) {
      printf("=");
   }
	
   printf("=\n");
}

void display() {
   int i;
   printf("[");
	
   // navigate through all items 
   for(i = 0;i < MAX;i++) {
      printf("%d ", intArray[i]);
   }
	
   printf("]\n");
}

void SelectionSortStack() {
   int indexMin,i,j;
	
   // loop through all numbers 
   for(i = 0; i < MAX-1; i++) { 
	
      // set current element as minimum 
      indexMin = i;
		
      // check the element to be minimum 
      for(j = i+1;j < MAX;j++) {
         if(intArray[j] < intArray[indexMin]) {
            indexMin = j;
         }
      }

      if(indexMin != i) {
         printf("Items swapped: [ %d, %d ]\n" , intArray[i], intArray[indexMin]); 
			
         // swap the numbers 
         int temp = intArray[indexMin];
         intArray[indexMin] = intArray[i];
         intArray[i] = temp;
      }          

      printf("Iteration %d#:",(i+1));
      display();
   }
}  

void main() {
   printf("Input Array: ");
   display();
   printline(50);
   selectionSort();
   printf("Output Array: ");
   display();
   printline(50);
}

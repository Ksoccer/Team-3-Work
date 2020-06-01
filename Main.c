/*********************************************************************************
 *
 *                      ********************************
 *                      *                              *
 *                      *     Main.c
 *                      *                              *
 *                      ********************************
 *
 ********************************************************************************
 *
 * Author(s): Nithin Kumar KV, Robert Furlong
 *
 ********************************************************************************
 * Description:
 *
 * To detect Fault like OV,UV,OC,UC,UFrequency,OverFrequency
 * And to run data structure algorithims using both the heap and stack
 *
 ********************************************************************************/
#include<stdio.h>
#include<stdbool.h>
#include <pthread.h>
#include "Faults.h"

int main()
{
  float Current,Voltage,Frequency;
  int time=0;
 bool OverCurrentFault,OverVoltageFault,UnderCurrentFault,UnderVoltageFault,OverFrequencyFault,UnderFrequencyFault;
  
  /*printf("Enter Current");
  scanf("%f",&Current);
  printf("Enter Voltage");
  scanf("%f",&Voltage);
  printf("Enter Frequency");
  scanf("%f",&Frequency);
  printf("Enter time");
  scanf("%d",&time); */
  //Invoke fault functions
 /*while(1)
 {	 
  if(time < 20)
  {
	  time++;
  }
  else
  {
	  time = 0;
	  OverCurrentFault = 0;
	  OverVoltageFault = 0;
	  UnderCurrentFault = 0;
	  UnderVoltageFault = 0;
	  OverFrequencyFault = 0;
	  UnderFrequencyFault = 0;
  } */
  //UnderVoltageFault = UnderVoltage(Voltage,time);
  //UnderFrequencyFault = UnderFrequency(Frequency,time);
 // OverFrequencyFault = OverFrequency(Frequency,time);
  //UnderCurrentFault = UnderCurrent(Current,time);
  //OverCurrentFault = Over_Current(Current, time);
 // OverVoltageFault = OverVoltage(Voltage, time);
	 
 /* if(OverCurrentFault)
  {	
    printf("OC Fault");
  }
  if(OverVoltageFault)
  {	
    printf("OV Fault");
  }
  if(UnderCurrentFault)
  {	
    printf("UC Fault");
  }
  if(UnderVoltageFault)
  {	
    printf("UV Fault");
  }
  if(OverFrequencyFault)
  {	
    printf("OF Fault");
  }
 //}
	*/
/***************** Binary Search **********************/
// uncomment this set of code and the relating code in the .travis.yml to build
	
int FaultArray[] = {33, 45, 46, 51, 60, 67, 71, 80, 88};
int beginning = FaultArray[0];
int end = FaultArray [sizeof (FaultArray) / sizeof (FaultArray[0])];
int middle  = FaultArray[end/2];
int x = 45;
int binarysearch(int FalutArray [], int beginning, int end, int x);
int heapsize = 11;
int *HeapArray = (int*) malloc (heapsize*sizeof(int));
int array[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110};
int y = 10;
for (int i = 0; i < heapsize; i++){
*(HeapArray + i) = array [i];
}
int HeapBeginning  = *(HeapArray + 0);
int HeapEnd = *(HeapArray + sizeof(*(HeapArray))/sizeof(*(HeapArray + 0)));
int HeapMiddle  = *(HeapArray + HeapEnd/2);
int HeapSearch(int *HeapArray, int HeapBeginning, int HeapEnd, int y);
//threading the binary search heap function
pthread_t thr1, thr2, thr3;
pthread_create(&thr1, NULL, HeapSearch(HeapArray, HeapBeginning, HeapEnd, y), NULL);
//pthread_create (&thr2, NULL, BinarySearchHeap(HeapArray, HeapBeginning, HeapEnd, y), int);
//pthread_create (&thr3, NULL, BinarySearchHeap(HeapArray, HeapBeginning, HeapEnd, y), int);
pthread_join(thr1, NULL);
//pthread_join (thr2, NULL);
//pthread_join (thr3, NULL);
//pthread_exit (NULL);
free(HeapArray);

 /*************** Bubble Sort ***************************/	
/*int arr1[] = {33, 11, 22, 77, 66, 44, 55}; 
int n = sizeof(arr1)/sizeof(arr1[0]); 
//calling bubbleSort_Stack function using stack memory values
bubbleSort_Stack(arr1, n);

int arr2[] = {110, 2, 99, 117, 1166, 1144, 2255}; 
int n1 = sizeof(arr2)/sizeof(arr2[0]); 
int *arr;
arr = (int*) malloc (n1*sizeof(int));
for(int p=0;p<n1;p++)
{
*(arr + p) = arr2[p];
}
//calling bubbleSort_Stack function using Dynamic(heap) memory values
bubbleSort_Heap(arr, n1);
free(arr);
	*/
 return 0;
}

/******************* Selection Sort ********************/

/*int arrky[] = {2, 98, 56, 57, 12, 87, 24}; 
int l = sizeof(arrky)/sizeof(arrky[0]); 
//Selection Sort Stack function call
SelectionSortStack(arrky, l);

int arrky2[] = {210, 98, 5, 301, 986, 1, 632}; 
int p2 = sizeof(arrky2)/sizeof(arrky2[0]); 
int *arrt2;
arrt2 = (int*) malloc (p2*sizeof(int));
for(int p=0;p<p2;p++)
{
*(arrt2 + p) = arrky2[p];
}
//calling SelectionSort with a matrix stored in heap
SelectionSortHeap(arrt2, p2);
free(arr2);
 return 0;
}*/

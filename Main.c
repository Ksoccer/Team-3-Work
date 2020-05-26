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
 * Author(s): Nithin Kumar KV
 *
 ********************************************************************************
 * Description:
 *
 * To detect Fault like OV,UV,OC,UC,UFrequency,OverFrequency
 *
 *
 ********************************************************************************/
#include<stdio.h>
#include<stdbool.h>
#include "Faults.h"

/* Function to print an array */
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
} 

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
  scanf("%d",&time);
  //Invoke fault functions
 while(1)
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
  }
  UnderVoltageFault = UnderVoltage(Voltage,time);
  UnderFrequencyFault = UnderFrequency(Frequency,time);
 // OverFrequencyFault = OverFrequency(Frequency,time);
  //UnderCurrentFault = UnderCurrent(Current,time);
  OverCurrentFault = Over_Current(Current, time);
  //OverVoltageFault = OverVoltage(voltage, time);
	 
  if(OverCurrentFault)
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
 }*/
	
	 
/*

int heapsize
printf ("enter the size of the array: ");
scanf ("%d" &heapsize);
HeapSearch = (int*) malloc (heapsize*sizeof(int));


*/
 /*************** Bubble Sort ***************************/	
 int arr[] = {33, 11, 22, 77, 66, 44, 55};  
 return 0;
}

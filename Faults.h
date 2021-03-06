#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#include <pthread.h>

//Threshold for Min/Max for detecting faults
//User can edit this for their application purposes
#define K_UV_MAX 5.0
#define K_UI_MIN 1.0
#define K_UF_MIN 350.0
#define K_OC_MAX 11.0
#define K_OF_MAX 450.0
#define K_OV_MAX 15.0

//Function declarations
bool UnderVoltage(float voltage,int time);
bool UnderCurrent(float current,int time);
bool OverFrequency(float Frequency, int time);
bool UnderFrequency(float Frequency, int time);
bool OverCurrent(float current, int time);  
bool OverVoltage(float Voltage, int time);
void bubbleSort_Stack(int arr[], int n);
void bubbleSort_Heap(int arr[], int n);
void SelectionSortHeap(int arr[], int n);
void SelectionSortStack(int arr[], int n);
void *HeapSearch (int y);
int binarysearch (int FaultArray[], int beginning, int end, int x);
void insertionSort_Stack(int arr[], int n);


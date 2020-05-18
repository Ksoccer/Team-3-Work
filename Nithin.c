#include<stdio.h>
#include<stdbool.h>
#include "Faults.h"

int main()
{
  float Current,Voltage,Frequency;
  int time;
  bool OverCurrentFault,OverVoltageFault,UnderCurrentFault,UnderVoltageFault,OverFrequencyFault;
  
  printf("Enter Current");
  scanf("%f",&Current);
  printf("Enter Voltage");
  scanf("%f",&Voltage);
  printf("Enter Frequency");
  scanf("%f",&Frequency);
   printf("Enter time");
  scanf("%d",&time);
  printf("enter values");
  //Invoke fault functions
  UnderVoltageFault = UnderVoltage(Voltage,time);
  
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
   
  return 0;
}


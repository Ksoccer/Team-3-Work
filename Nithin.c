#include<stdio.h>

int main()
{
  float Current,Voltage,Frequency;
  int time;
  boolean OverCurrentFault,OverVoltageFault,UnderCurrentFault,UnderVoltageFault,OverFrequencyFault;
  
  printf("Enter Current");
  scanf("%d",&Current);
  printf("Enter Voltage");
  scanf("%d",&Voltage);
  printf("Enter Frequency");
  scanf("%d",&Frequency);
   printf("Enter time");
  scanf("%d",&time);
  
  //Invoke fault functions
  UnderVoltageFault = UnderVoltage(Voltage,time);
  
  if(OverCurrentFault)
  {	
    printf("OC Fault");
  }
  if(OverVoltageFault)
  {	
    printf("OC Fault");
  }
  if(UnderCurrentFault)
  {	
    printf("OC Fault");
  }
  if(UnderVoltageFault)
  {	
    printf("OC Fault");
  }
  if(OverCurrentFault)
  {	
    printf("OC Fault");
  }
   
  return 0;
}


#include<stdio.h>
#include<stdbool.h>

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


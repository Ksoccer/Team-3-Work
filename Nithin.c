#include<stdio.h>

int main()
{
  float Current,Voltage,Frequency;
  bool OverCurrentFault,OverVoltageFault,UnderCurrentFault,UnderVoltageFault,OverFrequencyFault;
  
  printf("Enter Current")
  scanf("%d",&Current);
  printf("Enter Voltage")
  scanf("%d",&Current);
  printf("Enter Frequency")
  scanf("%d",&Frequency);
  
  //Invoke fault functions
  
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


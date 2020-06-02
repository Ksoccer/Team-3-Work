#include<pthread.h>
#include<stdio.h>
#include<unistd.h>

/* Note: This code was developed in Linux Virtualbox and imported over to Github for means of the learning report and for the instructors to view*/


void* MultiTab(void* pv)
{
int i;
printf("The Multiplication table of 5 is:\n");
for(i=1;i<=10;i++)
  {
  int temp = 5*i;
  printf("%d\n", temp);
  }
}

void* DivisTab(void* pv)
{
int i;
printf("The Division table of 5 is:\n");
  for(i=1;i<=10;i++)
  {
  float temp1 = 5./i;
  printf("%f\n",temp1);
  }
}

int main()
{
pthread_t pt1,pt2;  //creates threads 
pthread_create(&pt1,NULL,MultiTab,NULL);  //creates and starts the thread functions
pthread_create(&pt2,NULL,DivisTab,NULL);
pthread_join(pt1,NULL);                 //Joins the two threads to begin and run simulatenously
pthread_join(pt2,NULL);
return 0;
}




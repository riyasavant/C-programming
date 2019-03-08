#include<stdio.h>
void input(char *v,int *min)
{
 printf("Enter the type of vehicle\nCar-c\tBus-b\tTempo-t\n");
 scanf("%c",v);
 printf("Enter the time in minutes\n");
 scanf("%d",min);
}
void fares(int min,char v,float *fare)
{
 float hours;
 switch(v)
 {
  case 'c':
  {
   hours=min/60;
   if(hours<=2)
   {
    *fare=(hours*20);
   }
   else
   {
    *fare=40+((hours-2)*30);
   }
  }
  case 'b':
  {
   hours=min/60;
   if(hours<=4)
   {
    *fare=(hours*40);
   }
   else
   {
    *fare=160+((hours-4)*50);
   }
  }
  case 't':
  {
   hours=min/60;
   if(hours<=3)
   {
    *fare=(hours*30);
   }
   else
   {
    *fare=90+((hours-2)*40);
   }
  }
 }
}
void output(float fare,char v)
{
 printf("The Fare for parking of Vehicle type:%c is rs.%.1f",v,fare);
}

int main()
{
 int min;
 float fare;
 char v;
 input(&v,&min);
 fares(min,v,&fare);
 output(fare,v);
 return 0;
}

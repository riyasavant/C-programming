#include<stdio.h>
#include<string.h>
struct employee_records
{
 char employee_name[20];
 float hourly_wage;
};

struct time_cards
{
 char name[20];
 float minutes;
};

struct employees
{
 int n;
 int t;
 struct employee_records e[20];
 struct time_cards t1[20];
};

void employee(struct employees *e1)
{
 first:
 printf("Enter the number of employees\n");
 scanf("%d",&e1->n);
 if(e1->n<=20)
 {
  printf("Enter the employee records\nName: Hourly wage:\n");
  for(int i=0;i<e1->n;i++)
  {
   scanf("%s %f",e1->e[i].employee_name,&e1->e[i].hourly_wage);
  }
 }
 else
 {
  printf("Enter less than 20 employees\n");
  goto first;
 }
 printf("Enter the number of time cards submitted\n");
 scanf("%d",&e1->t);
 printf("Enter the time card records\nName: Minutes worked:\n");
 for(int i=0;i<e1->t;i++)
 {
  scanf("%s %f",e1->t1[i].name,&e1->t1[i].minutes);
 }
}

void wages(struct employees *e1,float wage[],float hours[])
{
 for(int i=0;i<e1->n;i++)
 {
  hours[i]=0;
  wage[i]=0;
  for(int j=0;j<e1->t;j++)
  {
   if(strcmp(e1->e[i].employee_name,e1->t1[j].name)==0)
   {
    hours[i]=hours[i]+((e1->t1[j].minutes)/60);
   }
  }
  if(hours[i]>40)
  {
   wage[i]=(40*e1->e[i].hourly_wage)+(((hours[i]-40)*3*e1->e[i].hourly_wage)/2);
  }
  else if(hours[i]<=40)
  {
   wage[i]=(hours[i]*e1->e[i].hourly_wage);
  }
 }
}

void result(struct employees e1,float wage[],float hours[])
{
  for(int i=0;i<e1.n;i++)
 {
  if(hours[i]!=0)
  {
   printf("%s: %.2f hours, $%.2f\n",e1.e[i].employee_name,hours[i],wage[i]);
  }
  else
  {
   continue;
  }
 }
}

int main()
{
 struct employees e1;
 employee(&e1);
 float wage[e1.n],hours[e1.n];
 wages(&e1,wage,hours);
 result(e1,wage,hours);
 return 0;
}

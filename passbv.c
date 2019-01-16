#include<stdio.h>
int a;
int input(int *arr[])
{
  int i;
  printf("Enter the numbers to be added\n");
  scanf("%d\n",&a);
  printf("Enter the values in the array\n");
  for(i=0;i<a;i++)
  {
   scanf("%d\n",arr[i]);
  }
}
int compute(int ar[])
{ 
  int i;
  int sum=0;
  for(i=0;i<a;i++)
  {
   sum=sum+ar[i];
  }
  return sum; 
}
int output(int k)
{
  printf("The sum of %d numbers is %d\n",a,k);
}
int main()
{
  int z;
  int b[a];
  b[]=input();
  z=compute(b);
  output(z);
  return 0;
}

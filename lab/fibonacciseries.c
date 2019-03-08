#include<stdio.h>
int input_range()
{
 int n;
 printf("Enter the elements in the fibonacci series\n");
 scanf("%d",&n);
 return n;
}
void fibonacci(int x,int ar[])
{
 int a=1,b=1,temp,j=0,i;
 for(i=2;i<x;i++)
 {
  temp=a+b;
  ar[j]=temp;
  j++;
  a=b;
  b=temp;
 }
}
void output(int a[],int x)
{
 int j;
 printf("The fibonacci series is\n");
 printf("1 1 ");
 for(j=0;j<x-2;j++)
 {
  printf("%d ",a[j]);
 }
}
int main()
{
 int n;
 n=input_range();
 int a[n-2];
 fibonacci(n,a);
 output(a,n);
 return 0;
}


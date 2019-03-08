#include<stdio.h>
void output(int l[],int m);
int input()
{
 int n;
 printf("Enter the elements in the fibonacci series\n");
 scanf("%d",&n);
 return n;
}
void fibo(int x)
{
 int a=1,b=1,z,k[x-2],j=0;
 for(int i=2;i<x;i++)
 {
  z=a+b;
  k[j]=z;
  j++;
  a=b;
  b=z;
 }
 output(k,x);
}
void output(int l[],int m)
{
 printf("The fibonacci series is\n");
 printf("1 1 ");
 for(int j=0;j<m-2;j++)
 {
  printf("%d ",l[j]);
 }
}
int main()
{
 int c;
 c=input();
 fibo(c);
 return 0;
}


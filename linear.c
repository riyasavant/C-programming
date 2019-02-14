#include<stdio.h>
void input();
void compute(int b[],int x,int y);
void output(int x,int y);
void output1(int x);
void input()
{
  int n,x;
  printf("Enter the number of values in the array\n");
  scanf("%d",&n);
  int a[n];
  printf("Enter the values in the array\n");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("Enter the number to be searched\n");
  scanf("%d",&x);
  compute(a,n,x);
}
void compute(int b[],int x,int y)
{
  int pos=0;
  for(int i=0;i<x;i++)
  {
    if(b[i]==y)
    {
     pos=i+1;
    }
  }
  if(pos==0)
  {
   output1(y);
  }
  else
  {
   output(pos,y);
  }
}
void output(int x,int y)
{
 printf("The value %d is found at the position %d in the array\n",y,x);
}
void output1(int x)
{
 printf("The value %d is not found in the array\n",x);
}

int main()
{
  input();
  return 0;
}

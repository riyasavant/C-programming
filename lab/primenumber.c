#include<stdio.h>

int input_range()
{
 int n;
 printf("Enter the number of prime numbers to be generated\n");
 scanf("%d",&n);
 return n;
}

void prime(int n,int a[])
{
  int i=2,x=0;
 while(n>0)
 {
  if(i%2==0||i%3==0||i%5==0)
  {
   i++;
  }
  else
  {
   a[x]=i;
   i++;
   n--;
   x++;
  }
  
 } 
}
void output(int b[],int n)
{
 for(int i=0;i<n;i++)
 {
  printf("%d\n",b[i]);
 }
}
int main()
{
 int x;
 x=input_range();
 int a[x];
 prime(x,a);
 output(a,x);
 return 0;
}



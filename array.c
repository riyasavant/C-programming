
#include<stdio.h>
void compute(int w[], int p);
void output(int f);
void input(int *x)
{
  printf("Enter the size of the array\n");
  scanf("%d",x);
}

void input_two(int b)
{
  int i;
  int z[b];
  
  printf("Enter the elements in the array\n");
  for(i=0;i<b;i++)
 {
   scanf("%d\n",&z[i]);
 }
  compute(z,b);
}
void compute(int w[], int p)
{ 
   int i,sum=0;
   for(i=0;i<p;i++)
{
  sum=sum+w[i];
}
   output(sum);
}
void output(int f)
{
 printf("The sum is %d\n",f);
}


int main()
{
  int r;
  input(&r);
  input_two(r);
  
  return 0;
}



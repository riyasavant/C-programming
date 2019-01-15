#include<stdio.h>
void input(int *x,int *y)
{
  printf("Enter two numbers\n");
  scanf("%d %d",x,y);
 }
int compute(int a,int b)
{
  int sum;
  sum=a+b;
  return sum;
}
void output(int k)
{
  printf("after adding the numbers the output is %d\n",k);
}
int main()
{
  int r,s;
  input(&r,&s);
  int z=compute(r,s);
  output(z);
  return 0;
}




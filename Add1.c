#include<stdio.h>
int input()
{
  int a;
  printf("Enter a number\n");
  scanf("%d",&a);
  return a;
 }
int compute(int b)
{
  b=b+1;
  return b;
}
void output(int x)
{
  printf("after adding 1 the number is %d\n",x);
}
int main()
{
  int y;
  y=input();
  int z=compute(y);
  output(z);
  return 0;
}





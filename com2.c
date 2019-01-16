#include<stdio.h>
void input(int *x,int *y)
{
  printf("Enter two numbers\n");
  scanf("%d %d",x,y);
 }
int compute(int a,int b)
{
  if(a>=b)
 {
  return b;
 }
  else
 {
  return a;
 }
  
}
void output(int k)
{
  printf("The smaller of the two numbers is %d\n",k);
}
int main()
{
  int r,s;
  input(&r,&s);
  int z=compute(r,s);
  output(z);
  return 0;
}

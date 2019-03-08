#include<stdio.h>
void input2num(int *x,int *y)
{
  printf("Enter two numbers\n");
  scanf("%d %d",x,y);
 }
int compare_two(int x,int y)
{
  if(x>=y)
 {
  return y;
 }
  else
 {
  return x;
 }
  
}
void result(int small)
{
  printf("The smaller of the two numbers is %d\n",small);
}
int main()
{
  int x,y;
  input2num(&x,&y);
  int small=compare_two(x,y);
  result(small);
  return 0;
}

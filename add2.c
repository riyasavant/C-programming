#include<stdio.h>
void inputtwonum(int *x,int *y)
{
  printf("Enter two numbers\n");
  scanf("%d %d",x,y);
 }
int addtwo(int x,int y)
{
  int sum;
  sum=x+y;
  return sum;
}
void outputresult(int result)
{
  printf("after adding the numbers the output is %d\n",k);
}
int main()
{
  int x,y;
  inputtwonum(&x,&y);
  int sum=addtwo(x,y);
  outputresult(sum);
  return 0;
}




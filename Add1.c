#include<stdio.h>
int inputnumber()
{
  int n;
  printf("Enter a number\n");
  scanf("%d",&n);
  return n;
 }
int addone(int n)
{
  n=n+1;
  return n;
}
void outputresult(int result)
{
  printf("after adding 1 the result is %d\n",result);
}
int main()
{
  int n;
  n=inputnumber();
  int result=addone(n);
  outputresult(result);
  return 0;
}





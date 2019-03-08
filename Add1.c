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
void outputsum(int result)
{
  printf("after adding 1 the number is %d\n",result);
}
int main()
{
  int n;
  n=input();
  int result=compute(n);
  output(result);
  return 0;
}





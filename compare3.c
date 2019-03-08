#include<stdio.h>
void input3num(int *x,int *y, int *z)
{
  printf("Enter three numbers\n");
  scanf("%d%d%d",x,y,z);
 }
int compare_three(int a,int b,int c)
{
  if(a>=b&&c>=b)
 {
  return b;
 }
  else if(b>=a&&c>=a)
 {
  return a;
 }
  else
 {
  return c;
 }
}
void result(int small)
{
  printf("The smaller of the three numbers is %d\n",small);
}
int main()
{
  int x,y,z;
  input3num(&x,&y,&z);
  int small=compare_three(x,y,z);
  result(small);
  return 0;
}

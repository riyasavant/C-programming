#include<stdio.h>
void input3num(int *x,int *y, int *z)
{
  printf("Enter three numbers\n");
  scanf("%d %d %d",x,y,z);
 }
int largest(int a,int b,int c)
{
  int max;
  if(a>=b&&a>=c)
 {
  max=a;
 }
  else if(b>=a&&b>=c)
 {
  max=b;
 }
  else if(c>=a&&c>=b)
 {
  max=c;
 }
 return max;
}
void result(int k)
{
  printf("The largest of the three numbers is %d\n",k);
}
int main()
{
  int e,f,g;
  input3num(&e,&f,&g);
  int z=largest(e,f,g);
  result(z);
  return 0;
}

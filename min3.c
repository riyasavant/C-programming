#include<stdio.h>
void input(int *x,int *y, int *z)
{
  printf("Enter three numbers\n");
  scanf("%d %d %d",x,y,z);
 }
int compute(int a,int b,int c)
{
  int min=0;
  if(a>b)
{
  min=b;
  if(min<c)
 {
  min=b;
 }
  else
 {
  min=c;
 }
}
  if(b>a)
{
  min=a;
  if(min<c)
 {
  min=a;
 }
  else
 {
  min=c;
 }
}
 return min;
}
void output(int k)
{
  printf("The smaller of the three numbers is %d\n",k);
}
int main()
{
  int e,f,g;
  input(&e,&f,&g);
  int z=compute(e,f,g);
  output(z);
  return 0;
}

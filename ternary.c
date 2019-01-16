#include<stdio.h>
void input(int *x,int *y, int *z)
{
  printf("Enter three numbers\n");
  scanf("%d %d %d",x,y,z);
 }
int compute(int a,int b,int c)
{
  int small;
  small=a<b?(a<c?a:c):(b<c?b:c);
  return small;
}
void output(int k)
{
  printf("The smaller of the two numbers is %d\n",k);
}
int main()
{
  int e,f,g;
  input(&e,&f,&g);
  int z=compute(e,f,g);
  output(z);
  return 0;
}

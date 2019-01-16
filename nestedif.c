#include<stdio.h>
void input(int *x,int *y, int *z)
{
  printf("Enter three numbers\n");
  scanf("%d %d %d",x,y,z);
 }
int compute(int a,int b,int c)
{
  if(a>b)
  {
   if(c>b)
  {
    return b;
  }
   else
  {
   return c;
  }
 }
  if(b>a)
 {
   if(c>a)
  {
    return a;
  }
   else
  {
   return c;
  }
  }
return 0;  
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

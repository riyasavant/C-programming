#include<stdio.h>
void input3num(int *x,int *y, int *z)
{
  printf("Enter three numbers\n");
  scanf("%d%d%d",x,y,z);
 }
int compare_3_num(int a,int b,int c)
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
void result(int min)
{
  printf("The smaller of the three numbers is %d\n",min);
}
int main()
{
  int x,y,z;
  input3num(&x,&y,&z);
  int min=compare_3_num(x,y,z);
  result(min);
  return 0;
}

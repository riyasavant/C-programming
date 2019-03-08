#include<stdio.h>
#include<math.h>
int input_num()
{
 int n;
 printf("Enter the number to find if it is an armstrong number\n");
 scanf("%d",&n);
 return n;
}
int armstrong(int x)
{
 int digit,arm=0,n=0,y;
 y=x;
 while(x!=0)
 {
  n++;
  x=x/10;  
 }
 while(y!=0)
 {
  digit=y%10;
  y=y/10;
  arm=arm+pow(digit,n);  
 }
  return arm;
}
void result(int x,int y)
{
 if(x==y)
 {
  printf("The number %d is an armstrong number\n",x);
 }
 else
 {
  printf("The number is %d not an armstrong number",x);
 }
}
int main()
{
 int a,arm;
 a=input_num();
 arm=armstrong(a);
 result(a,arm);
 return 0;
}

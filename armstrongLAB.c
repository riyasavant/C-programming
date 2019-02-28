#include<stdio.h>
#include<math.h>
int input()
{
 int n;
 printf("Enter the number to find if it is an armstrong number\n");
 scanf("%d",&n);
 return n;
}
int compute(int x)
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
void output(int x,int y)
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
 int a,b;
 a=input();
 b=compute(a);
 output(a,b);
 return 0;
}


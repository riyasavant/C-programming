#include<stdio.h>
int input()
{
 int n;
 printf("Enter the number to find the palindrome\n");
 scanf("%d",&n);
 return n;
}
int compute(int x)
{
 int digit,rev=0;
 while(x!=0)
 {
  digit=x%10;
  x=x/10;
  rev=digit+(rev*10);  
 }
  return rev;
}
void output(int x,int y)
{
 if(x==y)
 {
  printf("The number %d is a palindrome\n",x);
 }
 else
 {
  printf("The number is %d not a palindrome",x);
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


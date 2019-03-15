#include<stdio.h>

struct egyptian_fraction
{
 int num,den;
 int arr[100];
};

int instances()
{
 int n;
 printf("Enter the number of instances\n");
 scanf("%d",&n);
 return n;
}

int number_of_fraction()
{
 int n;
 printf("Enter the number of fractions\n");
 scanf("%d",&n);
 return n;
}
 
void fraction(int n,struct egyptian_fraction *a)
{
 printf("Enter the denominators of the fractions\n");
 for(int i=0;i<n;i++)
 {
  scanf("%d",&a->arr[i]);
 }
}

void egyptianfrac(int n,struct egyptian_fraction *a)
{
 int nume=0,deno=1,c,gcd,d,n2;
 for(int i=0;i<n;i++)
 {
  deno=deno*a->arr[i];
 }
 for(int i=0;i<n;i++)
 {
  nume=nume+(deno/a->arr[i]);
 }
 printf("%d\n%d\n",nume,deno);
 /*d=deno;
 n=nume;
 c=nume%deno;
 
 while(c>0)
 {
 nume=deno;
 deno=c;
 c=nume%deno;
 }
 gcd=deno;
 printf("%d\n",gcd);
 a->num=(n2/gcd);
 a->den=(d/gcd);*/
}

void output(int n,struct egyptian_fraction a)
{
 printf("The egyptian fraction is\n %d/%d=",a.num,a.den);
 for(int i=0;i<n;i++)
 {
 printf("1/%d+",a.arr[i]);
 }
}

int main()
{
 int n;
 //x=instances();
 n=number_of_fraction();
 struct egyptian_fraction a;
 fraction(n,&a);
 egyptianfrac(n,&a);
 output(n,a);
 return 0;
}

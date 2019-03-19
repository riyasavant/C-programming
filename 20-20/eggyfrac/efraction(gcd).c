//Separate GCD function
 gbdbhgr hbgnrtdsn4tzgef
#include<stdio.h>


struct egyptian_fraction
{ 
 int n;
 int arr[100];
};
struct fraction
{
 int numerator,denominator;
};

int instances()
{
 int n;
 printf("Enter the number of instances\n");
 scanf("%d",&n);
 return n;
}

void number_of_fraction(struct egyptian_fraction *a)
{
 printf("Enter the number of fractions\n");
 scanf("%d",&a->n);
}
 
void fraction(struct egyptian_fraction *a)
{
 printf("Enter the denominators of the fractions\n");
 for(int i=0;i<a->n;i++)
 {
  scanf("%d",&a->arr[i]);
 }
}

void egyptianfrac(struct egyptian_fraction a,struct fraction *f)
{
 int nume=0,deno=1,c,gcd,temp1,temp2;
 for(int i=0;i<a.n;i++)
 {
  deno=deno*a.arr[i];
 }
 for(int i=0;i<a.n;i++)
 {
  nume=nume+(deno/a.arr[i]);
 }
 temp2=deno;
 temp1=nume;
 c=nume%deno;
 while(c>0)
 {
 nume=deno;
 deno=c;
 c=nume%deno;
 }
 gcd=deno;
 f->denominator=(temp2/gcd);
 f->numerator=(temp1/gcd);
}

void output(struct egyptian_fraction a,struct fraction f)
{
 printf("%d/%d=1/%d",f.numerator,f.denominator,a.arr[0]);
 for(int i=1;i<a.n;i++)
 {
 printf("+");
 printf("1/%d",a.arr[i]);
 }
 printf("\n----------\n");
}

int main()
{
 int x;
 x=instances();
 while(x>0)
 {
 struct egyptian_fraction a;
 number_of_fraction(&a);
 fraction(&a);
 struct fraction f;
 egyptianfrac(a,&f);
 output(a,f);
 x--;
 }
 return 0;
}

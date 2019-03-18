//in output never do computation

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
 
void get_fraction(struct egyptian_fraction *a)
{
 printf("Enter the denominators of the fractions\n");
 for(int i=0;i<a->n;i++)
 {
  scanf("%d",&a->arr[i]);
 }
}

void egyptianfrac(struct egyptian_fraction a,struct fraction *f)
{
 int nume=0,deno=1;
 for(int i=0;i<a.n;i++)
 {
  deno=deno*a.arr[i];
 }
 for(int i=0;i<a.n;i++)
 {
  nume=nume+(deno/a.arr[i]);
 }
 f->numerator=nume;
 f->denominator=deno;
}
int GCD(struct fraction f)
{
 int c,nume,deno,gcd;
 nume=(f.numerator);
 deno=(f.denominator);
 c=nume%deno;
 while(c>0)
 {
 nume=deno;
 deno=c;
 c=nume%deno;
 }
 gcd=deno;
 
 return gcd;
}

void output(struct egyptian_fraction a,struct fraction f,int gcd)
{
 printf("%d/%d=1/%d",f.numerator/gcd,f.denominator/gcd,a.arr[0]);
 for(int i=1;i<a.n;i++)
 {
 printf("+");
 printf("1/%d",a.arr[i]);
 }
 printf("\n----------\n");
}

int main()
{
 int x,gcd;
 x=instances();
 while(x>0)
 {
 struct egyptian_fraction a;
 number_of_fraction(&a);
 get_fraction(&a);
 struct fraction f;
 egyptianfrac(a,&f);
 gcd=GCD(f);
 output(a,f,gcd);
 x--;
 }
 return 0;
}

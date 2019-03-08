#include<stdio.h>
struct fraction
{
 int num,den;
};

struct fraction input(struct fraction *f1,struct fraction *f2)
{
 printf("Enter the numerator1, denominator1 and numerator2 and denominator2 of two fractions\n");
 scanf("%d%d%d%d",&f1->num,&f1->den,&f2->num,&f2->den);
}
struct fraction add(struct fraction f1, struct fraction f2,struct fraction *f3)
{
 int numerator,denominator;
 numerator=(f1.num*f2.den)+(f2.num*f1.den);
 denominator=(f1.den*f2.den);
 f3->num=numerator;
 f3->den=denominator;
}
struct fraction result(struct fraction f1, struct fraction f2, struct fraction f3)
{
 printf("The sum of %d/%d+%d/%d is %d/%d",f1.num,f1.den,f2.num,f2.den,f3.num,f3.den);
}
int main()
{  
 struct fraction x,y,z;
 input(&x,&y);
 add(x,y,&z);
 result(x,y,z);
 return 0;
}

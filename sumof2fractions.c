#include<stdio.h>
struct fraction
{
 int num,den;
};

void input(struct fraction *f1)
{
 printf("Enter the numerator and denominator\n");
 scanf("%d%d",&f1->num,&f1->den);
}
void add(struct fraction f1, struct fraction f2,struct fraction *f3)
{
 int numerator,denominator;
 numerator=(f1.num*f2.den)+(f2.num*f1.den);
 denominator=(f1.den*f2.den);
 f3->num=numerator;
 f3->den=denominator;
}
void result(struct fraction f1)
{
 printf("The sum is %d/%d",f1.num,f1.den);
}
int main()
{  
 struct fraction x,y,z;
 input(&x);
 input(&y);
 add(x,y,&z);
 result(z);
 return 0;
}

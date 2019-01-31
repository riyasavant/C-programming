#include<stdio.h>
struct fraction
{
 int num;
 int den;
};

struct fraction input(struct fraction *f1,struct fraction *f2)
{
 printf("Enter the numerator1, denominator1 and numerator2 and denominator2 of two    fractions\n");
 scanf("%d%d%d%d",&f1->num,&f1->den,&f2->num,&f2->den);
};
struct fraction compute(struct fraction f1, struct fraction f2,struct fraction *f3)
{
 int g,h;
 g=(f1.num*f2.den)+(f2.num*f1.den);
 h=(f1.den*f2.den);
 f3->num=g;
 f3->den=h;
};
struct fraction output(struct fraction f1, struct fraction f2, struct fraction f3)
{
 printf("The sum of %d/%d+%d/%d is %d/%d",f1.num,f1.den,f2.num,f2.den,f3.num,f3.den);
};
int main()
{  
 struct fraction x,y,z;
 input(&x,&y);
 compute(x,y,&z);
 output(x,y,z);
 return 0;
}


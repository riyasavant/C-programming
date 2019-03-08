#include<stdio.h>
struct fraction
{
 int num,den;
};
int inputrange()
{
 printf("Enter the number of fractions\n");
 int i;
 scanf("%d",&i);
 return i;
}
struct fraction input(int n,struct fraction f[])
{
 int i;
 printf("Enter the fractions\n\n");
 for(i=1;i<=n;i++)
 {
  printf("Enter the numerator and denominator of fraction %d\n",i);
  scanf("%d%d",&f[i].num,&f[i].den);
 }
};
struct fraction add(int n,struct fraction f[],struct fraction *f1)
{
 int numerator=0,denominator=1,i;
 for(i=1;i<=n;i++)
 {
  denominator=denominator*f[i].den;
 }
 for(i=1;i<=n;i++)
 {
  numerator=numerator+(f[i].num*denominator/f[i].num);
 }
 f1->num=numerator;
 f1->den=denominator;
};
struct fraction result(struct fraction f1)
{
 printf("The sum of all the fraction is %d/%d",f1.num,f1.den);
};

int main()
{
 int i;
 i=inputrange();
 struct fraction f[i];
 input(i,f);
 struct fraction f1;
 add(i,f,&f1);
 result(f1);
 return 0;
 
}

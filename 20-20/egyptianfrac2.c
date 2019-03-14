//eqyptian fraction

#include<stdio.h>
#include<math.h>

struct fraction
{
 double num,den;
};

int input_frac(struct fraction f[])
{
 int n;
 printf("Enter the numerator and denominator\n");
 scanf("%lf%lf",&f[0].num,&f[0].den);
 printf("Enter the range\n");
 scanf("%d",&n);
 return n;
}

void egyptianfrac(struct fraction f[],int n)
{
 
 float deno=1.00,nume=0.00;
 f[1].num=1;
 f[1].den=ceil(f[0].den/f[0].num);
 printf("%.0lf/%.0lf= %.0lf/%.0lf",f[0].num,f[0].den,f[1].num,f[1].den);
 
 for(int i=2;i<=n;i++)
 {
  int j=0;
  while(j<i)
  {
   deno=deno*f[j].den;
   j++;
  }
  int k=1;
  nume=f[0].num*deno/f[0].den;
  while(k<i)
  {
   nume=nume-((f[k].num*deno)/f[k].den);
   k++;
  }
  f[i].num=nume;
  f[i].den=deno;
  if(f[i].num!=1)
  {
   printf("+");
   f[i].den=ceil(f[i].den/f[i].num);
   f[i].num=1;
   printf("%.0lf/%.0lf",f[i].num,f[i].den);
   continue;
  }
  else if(f[i].num==1)
  {
   printf("+%.0lf/%.0lf",f[i].num,f[i].den);
   break;
  }
 }
 
}

int main()
{
 int n;
 struct fraction f[20];
 n=input_frac(f);
 egyptianfrac(f,n);
 return 0;

}

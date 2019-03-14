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
   f[i].den=ceil(f[i].den/f[i].num);
   f[i].num=1;
   continue;
  }
  else if(f[i].num==1)
  {
   break;
  }
 }
}
void output(struct fraction f[],int z)
{
 printf("%.0lf/%.0lf=",f[0].num,f[0].den);
 for(int i=1;i<=z;i++)
 {
  printf("%.0lf/%.0lf+",f[i].num,f[i].den);
 }
}
int main()
{
 int n;
 struct fraction f[20];
 n=input_frac(f);
 egyptianfrac(f,n);
 output(f,n);
 return 0;

}

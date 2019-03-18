#include<stdio.h>
#include<math.h>

struct fraction
{
 int num,den;
};

int input_frac(struct fraction f[])
{
 int n;
 printf("Enter the numerator and denominator\n");
 scanf("%d%d",&f[0].num,&f[0].den);
 printf("Enter the number of terms\n");
 scanf("%d",&n);
 return n;
}

void egyfrac(struct fraction f[],int n)
{
 f[1].num=1;
 f[1].den=ceil(f[0].den/f[0].num);
 printf("%d/%d= %d/%d+",f[0].num,f[0].den,f[1].num,f[1].den);
 for(int i=2;i<=n;i++)
 {
  f[i].num=(f[i-2].num*f[i-1].den)-(f[i-1].num*f[i-2].den);
  f[i].den=(f[i-2].den*f[i-1].den);
  if(f[i].num!=1)
  {
   f[i].num=1;
   f[i].den=ceil(f[i].den/f[i].num);
   printf("%d/%d+",f[i].num,f[i].den);
   continue;
  }
  else if(f[i].num==1)
  {
   printf("%d/%d",f[i].num,f[i].den);
   break;
  }
 }
}

int main()
{
 int n;
 struct fraction f[20];
 n=input_frac(f);
 egyfrac(f,n);
 return 0;

}

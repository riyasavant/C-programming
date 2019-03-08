#include<stdio.h>
#include<math.h>
int power()
{
 int p;
 printf("Enter the highest power of the polynomial\n");
 scanf("%d",&p);
 return p;
}
int value_of_x()
{
 int x;
 printf("Enter the value of x\n");
 scanf("%d",&x);
 return x;
}
void coefficients(float a[],int p)
{
  int i;
  printf("Enter the values of co-efficients of the polynomial\n");
  for(i=0;i<=p;i++)
  {
   scanf("%f",&a[i]);
  } 
}
int compute_poly(float a[],int p, float x)
{
  int i;
  float sum=0.0;
  for(i=0;i<=p;i++)
  {
   sum=sum+(a[i]*pow(x,i));
  } 
  return sum;
}
void result(float sum)
{
  printf("The sum of the polynomial is %.2f",sum);
}

int main()
{
 int p,x;
 p=power();
 x=value_of_x();
 float a[p+1],sum;
 coefficients(a,p);
 sum=compute_poly(a,p,x);
 result(sum);
 return 0;
}

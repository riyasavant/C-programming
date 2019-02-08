#include<stdio.h>
#include<math.h>
void input();
void compute(float b[],int k, float l);
void output(float o);

void input()
{
  int p;
  float x;
  printf("Enter the highest power of the polynomial\n");
  scanf("%d",&p);
  float a[p+1];
  printf("Enter the valur of x\n");
  scanf("%f",&x);
  printf("Enterr the values of co-efficients of the polynomial       ax^0+bx^1..\n");
  for(int i=0;i<=p;i++)
  {
   scanf("%f",&a[i]);
  } 
  compute(a,p,x);
}
void compute(float b[],int k, float l)
{
  float sum=0.0;
  for(int i=k;i>=0;i--)
  {
   sum=sum*l+b[i];
  } 
  output(sum);
}
void output(float o)
{
  printf("The sum of the polynomial is %f",o);
}

int main()
{
 input();
 return 0;
}

#include<stdio.h>
void inputnum(int *n,int *r)
{
 printf("Enter the values of n and r to calculate ncr and  npr\n");
 scanf("%d%d",n,r);
}
void factorial(int n,int r,int *factn,int *factr,int *factnr)
{
 int sum1=1,sum2=1,sum3=1,i;
 for(i=1;i<=n;i++)
 {
  sum1=sum1*i;
 }
 for(i=1;i<=r;i++)
 {
  sum2=sum2*i;
 }
 for(i=1;i<=n-r;i++)
 {
  sum3=sum3*i;
 }
 *factn=sum1;
 *factr=sum2;
 *factnr=sum3;
}
void computePNC(int factn,int factr,int factnr,float *ncr,float *npr)
{
 *ncr=factn/(factr*factnr);
 *npr=factn/factnr;
}
void result(float ncr,float npr)
{
  printf("The values after calculation are\n ncr=%.2f\n npr=%.2f",ncr,npr);
}
int main()
{
 int n,r,factn,factr,factnr;
 inputnum(&n,&r);
 factorial(n,r,&factn,&factr,&factnr);
 float ncr,npr;
 computePNC(factn,factr,factnr,&ncr,&npr);
 result(ncr,npr);
 return 0;
}



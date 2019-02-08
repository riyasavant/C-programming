#include<stdio.h>
#include<math.h>
void input(float *a,float *b,float *c);
void compute1(float x,float y,float z,float k);
void compute2(float x,float y,float z,float k);
void output1(float r1,float r2);
void output2(float re,float im);
void input(float *a,float *b,float *c)
{
  printf("Enter the co-efficients a,b,c of the quadratic equation ax^2+bx+c=0\n");
  scanf("%f%f%f",a,b,c);
}  
void compute1(float x,float y,float z,float k)
{
 float disc,root1,root2;
 if(k>=0)
 {
  disc=sqrt(k);
  root1= (-y+disc)/(2*x);
  root2= (-y-disc)/(2*x);
 }
  output1(root1,root2);
}
void compute2(float x,float y,float z,float k)
{
 float disc;
 float real,imag;
  if(k<0)
 {
  disc=sqrt(-k);
  
  real= -y/(2*x);
  imag= disc/(2*x);
 }
  output2(real,imag);
}
void output1(float r1,float r2)
{
 printf("The roots of the equation are x1=%.2f and x2=%.2f\n",r1,r2);
}
void output2(float re,float im)
{
 printf("The roots of the equation are x1=%.2f+i%.2f and x2=%.2f-i%.2f\n",re,im,re,im);
}
int main()
{
 float a,b,c,d;
 input(&a,&b,&c);
 d=(b*b)-(4*a*c);

 if(d>=0)
 {
  compute1(a,b,c,d);
 }
 else
 {
  compute2(a,b,c,d);
 }
return 0;
}


 

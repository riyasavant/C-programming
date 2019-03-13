#include<stdio.h>
#include<math.h>

struct equation
{
  float a,b,c,real,root1,root2,imag,disc;
};

void input(struct equation *x)
{
  printf("Enter the values of a,b,c\n");
  scanf("%f%f%f",&x->a,&x->b,&x->c);
  x->disc=(pow(x->b,2)-(4*x->a*x->c));
}

void roots(struct equation x)
{
  float dis;
  if(x.disc<0)
  { 
   printf("The roots are imaginary\n");
   dis=sqrt(-(x.disc));
   x.real=-(x.b)/(2*x.a);
   x.imag=dis/(2*x.a);
   printf("root1=%.2f+i%.2f and root2=%.2f-i%.2f",x.real,x.imag,x.real,x.imag);
  }
  else if(x.disc>0)
  {
   printf("The roots are real and distinct\n");
   dis=sqrt(x.disc);
   x.root1=(-(x.b)+dis)/(2*x.a);
   x.root2=(-(x.b)-dis)/(2*x.a);
   printf("root1=%.2f+i0 and root2=%.2f+i0",x.root1,x.root2);
  }
  else
  {
   printf("The roots are real and equal\n");
   dis=sqrt(x.disc);
   x.root1=-(x.b)/(2*x.a);
   printf("root1=%.2f+i0 and root2=%.2f+i0",x.root2,x.root2);
  }
}

int main()
{
  struct equation x;
  input(&x);
  roots(x);
  return 0;
}


#include<stdio.h>
#include<math.h>
struct quadratic
{
  int a,b,c;
  float disc,root1,root2;
  float real,imag;
};

struct quadratic coefficients(struct quadratic *q)
{
  printf("Enter the co-efficients a,b,c of the quadratic equation\n");
  scanf("%d%d%d",&q->a,&q->b,&q->c);
};

struct quadratic discriminant(struct quadratic *d,struct quadratic q)
{
    float dis;
    dis=pow((q.b),2)-(4*(q.a)*(q.c));
    d->disc=dis;
};

struct quadratic real_root(struct quadratic *r,struct quadratic q,struct quadratic d)
{
    printf("The roots are real and distinct\n\n");
    float r1,r2,dis;
    dis=sqrt(d.disc);
    r1=(-(q.b)+dis)/(2*(q.a));
    r2=(-(q.b)-dis)/(2*(q.a));
    r->root1=r1;
    r->root2=r2;
}

struct quadratic imag_root(struct quadratic *i,struct quadratic q,struct quadratic d)
{
    printf("The roots are imaginary\n\n");
    float imag,real,dis;
    dis=sqrt(-(d.disc));
    real=(-(q.b))/(2*(q.a));
    imag=dis/(2*(q.a));
    i->real=real;
    i->imag=imag;
}

struct quadratic equal_root(struct quadratic *r,struct quadratic q,struct quadratic d)
{
    printf("The roots are real and equal\n\n");
    float r1,r2,dis;
    dis=sqrt(d.disc);
    r1=(-(q.b)+dis)/(2*(q.a));
    r2=(-(q.b)-dis)/(2*(q.a));
    r->root1=r1;
    r->root2=r2;
}

struct quadratic display_real(struct quadratic r)
{
    printf("r1=%f+i0 and r2=%f+i0\n",r.root1,r.root2);
};

struct quadratic display_imag(struct quadratic i)
{
    printf("r1=%f+i%f and r2=%f-i%f",i.real,i.imag,i.real,i.imag);
};

int main()
{
  struct quadratic q,d,r,i;
  coefficients(&q);
  discriminant(&d,q);
  if(d.disc>0)
  {
  real_root(&r,q,d);
  display_real(r);
  }
  else if(d.disc<0)
  {
  imag_root(&i,q,d);
  display_imag(i);
  }
  else
  {
  equal_root(&r,q,d);
  display_real(r);
  }
  return 0;
}

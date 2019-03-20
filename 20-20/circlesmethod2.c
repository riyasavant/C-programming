#include<stdio.h>
#include<math.h>

struct circle_attributes
{
 float r[2],x[2],y[2];
};

struct circles
{
 int n;
 struct circle_attributes a[100];
};

void instances(struct circles *c)
{
 printf("Enter the number of pairs to be analysed\n");
 scanf("%d",&c->n);
}

void circle_data(struct circles *c)
{
 printf("Enter the radius and centre C(x,y)\n");
 for(int i=0;i<(c->n);i++)
 {
  for(int j=0;j<2;j++)
  {
   scanf("%f %f %f",&c->a[i].r[j],&c->a[i].x[j],&c->a[i].y[j]);
  }
 }
}
void calculation(struct circles c,float c1c2[],float add[],float sub1[],float sub2[])
{
 for(int i=0;i<(c.n);i++)
 {
  c1c2[i]=sqrt(pow(c.a[i].x[1]-c.a[i].x[0],2)+pow(c.a[i].y[1]-c.a[i].y[0],2));
  add[i]=c.a[i].r[1]+c.a[i].r[0];
  sub1[i]=c.a[i].r[1]-c.a[i].r[0];
  sub2[i]=c.a[i].r[0]-c.a[i].r[1];
 }
}
void output(struct circles c,float c1c2[],float add[],float sub1[],float sub2[])
{
 for(int i=0;i<(c.n);i++)
 {
  if((c1c2[i]>add[i])||(c1c2[i]<sub1[i])||(c1c2[i]<sub2[i]))
  {
   printf("The circles do not intersect\n");
   printf("----------------\n");
  }
  else if(((c1c2[i]<add[i])&&(c1c2[i]>sub1[i]))||((c1c2[i]<add[i])&&(c1c2[i]>sub2[i])))
  {
   printf("The circles intersect\n");
   printf("----------------\n");
  }
  else if((c1c2[i]==add[i])||(c1c2[i]<sub1[i])||(c1c2[i]<sub2[i]))
  {
   printf("The circles touch each other\n");
   printf("----------------\n");
  }
 }
}
int main()
{
 struct circles c;
 instances(&c);
 float a[c.n],b[c.n],d[c.n],e[c.n];
 circle_data(&c);
 calculation(c,a,b,d,e);
 output(c,a,b,d,e);
 return 0;
}

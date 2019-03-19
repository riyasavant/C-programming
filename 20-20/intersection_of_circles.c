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

void intersection(struct circles c)
{
 float c1c2;
 for(int i=0;i<(c.n);i++)
 {
  c1c2=sqrt(pow(c.a[i].x[1]-c.a[i].x[0],2)+pow(c.a[i].y[1]-c.a[i].y[0],2));
 if(c1c2>(c.a[i].r[1]+c.a[i].r[0])||c1c2<(c.a[i].r[1]-c.a[i].r[0])||c1c2<(c.a[i].r[0]-c.a[i].r[1]))
 {
  printf("The circles are not intersecting\n");
  printf("----------------\n");
 }
 else if((c1c2<(c.a[i].r[1]+c.a[i].r[0])&&c1c2>(c.a[i].r[1]-c.a[i].r[0]))||(c1c2<(c.a[i].r[0]+c.a[i].r[1])&&c1c2>(c.a[i].r[0]-c.a[i].r[1])))
 {
  printf("The circles intersect\n");
  printf("----------------\n");
 }
 else if(c1c2==(c.a[i].r[0]+c.a[i].r[1])||c1c2<(c.a[i].r[1]-c.a[i].r[0])||c1c2<(c.a[i].r[0]-c.a[i].r[1]))
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
 circle_data(&c);
 intersection(c);
 return 0;
}

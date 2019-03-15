#include<stdio.h>
#include<math.h>

struct circle
{
 float r1,r2,x1,y1,x2,y2;
};

int instances()
{
 int n;
 printf("Enter the number of pairs to be analysed\n");
 scanf("%d",&n);
 return n;
}

void circle_data(struct circle *c)
{
 printf("Enter the following\nCircle 1: Radius,centre\nCircle 2: Radius,centre\n");
 scanf("%f%f%f%f%f%f",&c->r1,&c->x1,&c->y1,&c->r2,&c->x2,&c->y2);
}

void intersection(struct circle c)
{
 float c1c2;
 c1c2=sqrt(pow(c.x2-c.x1,2)+pow(c.y2-c.y1,2));
 if(c1c2>(c.r1+c.r2)||c1c2<(c.r1-c.r2)||c1c2<(c.r2-c.r1))
 {
  printf("The circles are not intersecting\n");
  printf("----------------\n");
 }
 else if((c1c2<(c.r1+c.r2)&&c1c2>(c.r1-c.r2))||(c1c2<(c.r1+c.r2)&&c1c2>(c.r2-c.r1)))
 {
  printf("The circles intersect\n");
  printf("----------------\n");
 }
 else if(c1c2==(c.r1+c.r2)||c1c2<(c.r1-c.r2)||c1c2<(c.r2-c.r1))
 {
  printf("The circles touch each other\n");
  printf("----------------\n");
 }
}
int main()
{
 int n;
 n=instances();
 while(n>0)
 {
  struct circle c;
  circle_data(&c);
  intersection(c);
  n--;
 }
 return 0;
}

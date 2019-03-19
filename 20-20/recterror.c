//use of passing by reference
//use of macro to simplify the code

#include<stdio.h>
#include<math.h>
struct point
{
 float x,y;
};
struct rectangle
{
 struct point points[3];
 float length,breadth,area;
};

struct rectangles
{
 int n;
 struct rectangle a_rectangle[100];
};

void instances(struct rectangles *r)
{
 printf("Enter the number of instances\n");
 scanf("%d",&r->n);
}
void get_vertices(struct rectangles *r)
{
 printf("Enter the vertices P1(x1,y1),P2(x2,y2),P3(x3,y3)\n");
 for(int i=0;i<(r->n);i++)
 {
  for(int j=0;j<3;j++)
  {
   scanf("%f %f",&r->a_rectangle[i].points[j].x,&r->a_rectangle[i].points[j].y);
  }
 }
} 

void attributes(struct rectangles *r)
{
 float l,b,d;
 for(int i=0;i<(r->n);i++)
 {
 l=sqrt(pow((r->a_rectangle[i].points[1].x-r->a_rectangle[i].points[0].x),2)+pow((r->a_rectangle[i].points[1].y-r->a_rectangle[i].points[0].y),2));
 b=sqrt(pow((r->a_rectangle[i].points[2].x-r->a_rectangle[i].points[1].x),2)+pow((r->a_rectangle[i].points[2].y-r->a_rectangle[i].points[1].y),2));
 d=sqrt(pow((r->a_rectangle[i].points[2].x-r->a_rectangle[i].points[0].x),2)+pow((r->a_rectangle[i].points[2].y-r->a_rectangle[i].points[0].y),2));
 if(l<=d&&b<=d)
 {
  r->a_rectangle[i].length=l;
  r->a_rectangle[i].breadth=b;
 }
 else if(d<=b&&l<=b)
 {
  r->a_rectangle[i].length=l;
  r->a_rectangle[i].breadth=d;
 }
 else if(d<=l&&b<=l)
 {
  r->a_rectangle[i].length=d;
  r->a_rectangle[i].breadth=b;
 }
 }
}
void area(struct rectangles *r)
{
 for(int i=0;i<r->n;i++)
 {
  r->a_rectangle[i].area=(r->a_rectangle[i].length*r->a_rectangle[i].breadth);
 }
}
void output(struct rectangles r)
{
 printf("The area of the rectangle with vertices ");
 for(int i=0;i<r.n;i++)
 {
  for(int j=0;j<3;j++)
  {
   printf("(%.1f,%.1f) ",r.a_rectangle[i].points[j].x,r.a_rectangle[i].points[j].y);
  }
  printf("is %.1f",r.a_rectangle[i].area);
  printf("\n--------------------\n");
 }
}
 
int main()
{
 struct rectangles r;
 instances(&r);
 get_vertices(&r);
 attributes(&r);
 area(&r);
 output(r);
 return 0;
}

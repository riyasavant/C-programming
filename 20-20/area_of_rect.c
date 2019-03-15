#include<stdio.h>
#include<math.h>
struct area_of_rect
{
 float x1,x2,x3,y1,y2,y3,length,breadth,area;
};

int instances()
{
 int n;
 printf("Enter the number of instances\n");
 scanf("%d",&n);
 return n;
}
void vertices(struct area_of_rect *a)
{
 printf("Enter the vertices P1(x1,y1),P2(x2,y2),P3(x3,y3)\n");
 scanf("%f%f%f%f%f%f",&a->x1,&a->y1,&a->x2,&a->y2,&a->x3,&a->y3);
} 

void areaa(struct area_of_rect *a)
{
 float l,b,d;
 l=sqrt(pow((a->x2-a->x1),2)+pow((a->y2-a->y1),2));
 b=sqrt(pow((a->x3-a->x2),2)+pow((a->y3-a->y2),2));
 d=sqrt(pow((a->x3-a->x1),2)+pow((a->y3-a->y1),2));
 if(l<=b&&l<=d)
 {
  a->length=l;
 }
 else if(b<=d&&b<=l)
 {
  a->length=b;
 }
 else if(d<=b&&d<=l)
 {
  a->length=d;
 }
 if((l<=b&&b<=d)||(b<=l&&b>=d))
 {
  a->breadth=b;
 }
 else if((b<=l&&l<=d)||(l<=b&&l>=d))
 {
  a->breadth=d;
 }
 else if((d<=l&&d>=b)||(d<=b&&d>=l))
 {
  a->breadth=l;
 }
 a->area=(a->length*a->breadth);
}

void output(struct area_of_rect a)
{
 printf("The area of the rectangle with vertices (%.1f,%.1f) (%.1f,%.1f) (%.1f,%.1f) is %.1f\n",a.x1,a.y1,a.x2,a.y2,a.x3,a.y3,a.area);
 printf("------------------------------------------\n\n");
}
 
int main()
{
 int n;
 n=instances();
 while(n>0)
 {
 struct area_of_rect a;
 vertices(&a);
 areaa(&a);
 output(a);
 n--;
 }
 return 0;
}

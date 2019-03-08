#include<stdio.h>
void num(int *a,int *b)
{
    printf("Enter two mumbers to swap them\n");
    printf("x=");
    scanf("%d",a);
    printf("y=");
    scanf("%d",b);
}
void compute(int *a,int *b)
{
   int temp;
   temp=*a;
   *a=*b;
   *b=temp;
}
void output(int a,int b,int c,int d)
{
    printf("The numbers before swapping are x=%d and y=%d\n",a,b);
    printf("The numbers after swapping are x=%d and y=%d",c,d);
}
int main()
{
    int a,b,c,d;
    num(&a,&b);
    c=a;
    d=b;
    compute(&a,&b);
    output(c,d,a,b);
    return 0;
}

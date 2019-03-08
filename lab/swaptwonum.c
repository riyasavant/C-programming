#include<stdio.h>
void input2num(int *a,int *b)
{
    printf("Enter two mumbers to swap them\n");
    printf("x=");
    scanf("%d",a);
    printf("y=");
    scanf("%d",b);
}
void swap(int *a,int *b)
{
   int temp;
   temp=*a;
   *a=*b;
   *b=temp;
}
void result(int a,int b,int c,int d)
{
    printf("The numbers before swapping are x=%d and y=%d\n",a,b);
    printf("The numbers after swapping are x=%d and y=%d",c,d);
}
int main()
{
    int a,b,c,d;
    input2num(&a,&b);
    c=a;
    d=b;
    swap(&a,&b);
    result(c,d,a,b);
    return 0;
}

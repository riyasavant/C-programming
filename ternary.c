#include<stdio.h>
void input3num(int *x,int *y, int *z)
{
    printf("Enter three numbers\n");
    scanf("%d %d %d",x,y,z);
 }
int smallest(int a,int b,int c)
{
    int small;
    small=a<b?(a<c?a:c):(b<c?b:c);
    return small;
}
void result(int small)
{
    printf("The smaller of the three numbers is %d\n",small);
}
int main()
{
    int x1,x2,x3;
    input3num(&x1,&x2,&x3);
    int small=smallest(x1,x2,x3);
    result(small);
    return 0;
}

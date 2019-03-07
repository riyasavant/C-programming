#include<stdio.h>
int input()
{ 
    int n;
    printf("Enter marks to obtain the grade\n");
    scanf("%d",&n);
    return n;
}
int compute(int n)
{
    char c;
    if(n<120)
    {
      c='F';  
    }
    else if(n>=120&&n<150)
    {
        c='E';
    }
    else if(n>=150&&n<180)
    {
        c='D';
    }
    else if(n>=180&&n<210)
    {
        c='C';
    }
    else if(n>=210&&n<240)
    {
        c='B';
    }
    else if(n>=240&&n<300)
    {
        c='A';
    }
    return c;
}
void output(char c)
{
    printf("The grade obtained by the student is %c",c);
}
int main()
{
    int n;
    n=input();
    char c;
    c=compute(n);
    output(c);
    return 0;
}

#include<stdio.h>
int input_range()
{
    int n;
    printf("Enter the range of fibonacci series\n");
    scanf("%d",&n);
    return n;
}

void fibonacci(int n,int a[])
{
   int i;
   a[0]=1;
   a[1]=1;
   for(i=2;i<n;i++)
  {
    a[i]=a[i-1]+a[i-2];
  }
}

void output(int a[],int n)
{
    printf("The fibonacci series is\n\n");
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}

int main()
{
    int n;
    n=input_range();
    int a[n];
    fibonacci(n,a);
    output(a,n);
    return 0;
}

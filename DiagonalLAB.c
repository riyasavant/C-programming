#include<stdio.h>
int input()
{
    int n;
    printf("Enter the size of the matrix\n");
    scanf("%d",&n);
    return n;
}
void compute(int n,int a[n][n],int ar[])
{
    printf("Enter the values of the matrix\n");
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int k=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                ar[k]=a[i][j];
                k++;
            }
        }
    }
   
    
}
void output(int a[],int n)
{
    printf("The diagonal elements are\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}
int main()
{
    int n;
    n=input();
    int a[n][n];
    int ar[n];
    compute(n,a,ar);
    output(ar,n);
    return 0;
}

#include<stdio.h>
int size_of_matrix()
{
    int n;
    printf("Enter the size of the matrix\n");
    scanf("%d",&n);
    return n;
}
void input_matrix(int n,int a[n][n])
{
    printf("Enter the values of the matrix\n");
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}
void diagonal(int n,int a[n][n],int arr[])
{
    int k=0,i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                arr[k]=a[i][j];
                k++;
            }
        }
    }
}  

void result(int arr[],int n)
{
    int i;
    printf("The diagonal elements are\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}
int main()
{
    int n;
    n=size_of_matrix();
    int a[n][n];
    int arr[n];
    input_matrix(n,a);
    diagonal(n,a,arr);
    result(arr,n);
    return 0;
}

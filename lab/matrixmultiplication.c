#include<stdio.h>
void size(int *a,int *b)
{
   printf("Enter the size of rows and colums of matrix \n");
   scanf("%d%d",a,b);
}
void input(int a,int b,int x[a][b])
{
    printf("Enter the elements in matrix \n");
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
}
void compute(int a,int b,int c,int d,int x[a][b],int y[c][d],int z[a][d])
{
    if(b==c)
    {
      for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
           z[i][j]=0;
           for(int k=0;k<b;k++)
           {
               z[i][j]=z[i][j]+(x[i][k]*y[k][j]);
           }
        }
    }  
    }
}
void output(int a,int d,int z[a][d])
{
    printf("The matrix after multiplication is\n");
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<d;j++)
        {
            printf("%d\t",z[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int a,b,c,d;
    size(&a,&b);
    size(&c,&d);
    int x[a][b],y[c][d];
    input(a,b,x);
    input(c,d,y);
    int z[a][d];
    compute(a,b,c,d,x,y,z);
    output(a,d,z);
    return 0;
}

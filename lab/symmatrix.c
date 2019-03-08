#include<stdio.h>

int size()
{
 int n;
 printf("Enter the size of the matrix to check if it is symmetric or not\n");
 scanf("%d",&n);
 return n;
}

void input(int n,int a[n][n],int b[n][n])
{
 printf("Enter the values in the matrix\n");
 for(int i=0;i<n;i++)
 {
  for(int j=0;j<n;j++)
  {
   scanf("%d",&a[i][j]);
  }
 }
for(int i=0;i<n;i++)
 {
  for(int j=0;j<n;j++)
  {
   b[i][j]=a[j][i];
  }
 } 
}

void output(int n,int a[n][n],int b[n][n])
{
 int x;
 for(int i=0;i<n;i++)
 {
  for(int j=0;j<n;j++)
  {
   if(b[i][j]==a[j][i])
   {
    x=1;
   }
   else
   {
    x=0;
   }
  }
 }
 if(x==1)
 {
  printf("The matrix is symmetric\n");
 }
 else
 {
  printf("The matrix is not symmetric\n");
 }
}

int main()
{
 int n;
 n=size();
 int k[n][n],l[n][n];
 input(n,k,l);
 output(n,k,l);
 return 0;
}



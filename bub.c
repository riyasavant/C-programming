#include<stdio.h>
void input();
void compute(int b[],int x);
void output(int c[],int y);
void input()
{
  int n;
  printf("Enter the number of values in the array\n");
  scanf("%d",&n);
  int a[n];
  printf("Enter the values in the array\n");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  compute(a,n);
}
void compute(int b[],int x)
{
 int temp;
 for(int i=0;i<x;i++)
  {
    for(int j=i+1;j<x;j++)
     {
       if(b[i]>b[j])
       {
        temp=b[i];
        b[i]=b[j];
        b[j]=temp;
       }
     }
  }
  output(b,x);
}
void output(int c[],int y)
{
 printf("The array after bubble sort is\n");
 for(int i=0;i<y;i++)
  {
    printf("%d\n",c[i]);
  }
}
int main()
{
  input();
  return 0;
}

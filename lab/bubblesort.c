#include<stdio.h>
int array_size()
{
  int n;
  printf("Enter the size of the array\n");
  scanf("%d",&n);
  return n;
}
void array(int a[],int n)
{
  int i;
  printf("Enter the values in the array\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
}
void bubblesort(int a[],int n)
{
 int temp,i,j;
 for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
     {
       if(a[i]>a[j])
       {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
       }
     }
  }
}
void result(int a[],int n)
{
 int i;
 printf("The array after bubble sort is\n");
 for(i=0;i<n;i++)
  {
    printf("%d\n",a[i]);
  }
}
int main()
{
  int n;
  n=array_size();
  int a[n];
  array(a,n);
  bubblesort(a,n);
  result(a,n);
  return 0;
}

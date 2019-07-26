#include<stdio.h>
#include<stdlib.h>

int compare(const void *a,const void *b)
{
 return (*(int *)a-*(int *)b);
} 

int input_range()
{
 int n;
 printf("Enter the number of elements in the array\n");
 scanf("%d",&n);
 return n;
}

void input_array(int n,int arr[n])
{
 printf("Enter the elements in the array\n");
 for(int i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
 }
}

void qsort_bub(int n, int a[n], int size, int (*compare)(const void *a,const void *b))
{
 int temp;
 for(int i=0;i<n;i++)
 {
  for(int j=i+1;j<n;j++)
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

int main()
{
 int n;
 n=input_range();
 int arr[n];
 input_array(n,arr);
 qsort_bub(n,arr,sizeof(arr),compare);
 printf("After sorting the array is\n");
 for(int i=0;i<n;i++)
 {
  printf("%d\n",arr[i]);
 }
 return 0;
}

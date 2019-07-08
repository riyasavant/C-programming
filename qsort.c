#include<stdio.h>
#include<stdlib.h>
int compare(const void *a,const void *b)
{
 return (*int*a-*int *b);
}

int main()
{
 int n;
 printf("Enter the number of elements in the array\n");
 scanf("%d",&n);
 int arr[n];
 printf("Enter the values in the array\n");
 for(int i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
 }
 printf("Before sorting the array is\n");
 for(int i=0;i<n;i++)
 {
  printf("%d ",arr[i]);
 }
 
 qsort(arr,n,sizeof(int),compare);
 printf("After sorting the array is\n");
 for(int i=0;i<n;i++)
 {
  printf("%d ",arr[i]);
 }
 return 0;
}


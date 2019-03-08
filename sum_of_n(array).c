#include<stdio.h>
int array_size()
{
  int n;
  printf("Enter the size of the array\n");
  scanf("%d",&n);
  return n;
}
void input_array(int arr[],int n)
{
  int i;
  printf("Enter the elements in the array\n");
  for(i=0;i<n;i++)
 {
   scanf("%d",&arr[i]);
 }
}
int computesum(int arr[],int n)
{ 
   int i,sum=0;
   for(i=0;i<n;i++)
 {
  sum=sum+arr[i];
 }
 return sum;
}
void outputsum(int result)
{
 printf("The sum of all the elements in the array is %d\n",result);
}

int main()
{
  int n,sum;
  n=array_size();
  int arr[n];
  input_array(arr,n);
  sum=computesum(arr,n);
  outputsum(sum);
  return 0;
}



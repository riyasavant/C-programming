#include<stdio.h>
int input()
{
 int n;
 printf("Enter the number of elements in the array\n");
 scanf("%d",&n);
 return n;
}
void array(int n,int a[])
{
 printf("Enter the elements in the array\n");
 int i;
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
}
void sesort(int n,int a[])
{
 int min,temp,i,j;
 for(i=0;i<n-1;i++)
 {
  min=i;
  for(j=i+1;j<n;j++)
  {
   if(a[j]<a[min])
   {
    temp=a[min];
    a[min]=a[j];
    a[j]=temp;
    min=j;
   }
  }
 }
}
void output(int n,int a[])
{
 printf("The array after selection sort is\n");
 int i;
 for(i=0;i<n;i++)
 {
  printf("%d\n",a[i]);
 }
 int max=a[n-1];
 printf("Minimum=%d and Maximum=%d",a[0],max);
}

int main()
{
 int n;
 n=input();
 int a[n];
 array(n,a);
 sesort(n,a);
 output(n,a);
 return 0;
}



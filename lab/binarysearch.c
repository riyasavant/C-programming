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
   printf("Enetr the elements in the array\n");
   for(i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
   }
 }
 int number()
 {
   int x;
   printf("Enter the number to be searched\n");
   scanf("%d",&x);
   return x;
 }
 void sort(int a[],int n)
 {
   int i,j,temp;
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
 int binary(int n,int a[],int x)
 {
   int first=0;
   int last=n-1;
   int mid;
    while(first<=last)
    {
     mid=(first+last)/2;
     if(a[mid]>x)
     {
      last=mid-1;
     }
     else if(a[mid]<x)
     {
      first=mid+1;
     }
     else if(a[mid]==x)
     {  
       return mid;
     }
    return -1;
    }
 }
 void result(int pos)
 {
    if(pos==-1)
    {
      printf("The element is not present in the array");
    }
    else
    {
     printf("The element is present in the array at position %d\n",pos+1);
    }
 }
 int main()
 {
   int n,x,pos;
   n=array_size();
   int a[n];
   array(a,n);
   x=number();
   sort(a,n);
   pos=binary(n,a,x);
   result(pos);
   return 0;
 }

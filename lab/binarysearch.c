#include<stdio.h>
#include<stdlib.h>
void input();
void compute(int b[],int x,int y);
void output(int x,int y);
void input()
{
  int n,x;
  printf("Enter the number of values in the array\n");
  scanf("%d",&n);
  int a[n];
  printf("Enter the values in the array\n");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("Enter the number to be searched\n");
  scanf("%d",&x);
  compute(a,n,x);
}
void compute(int b[],int x,int y)
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
  int first=0,last=x-1;
  int mid;
  
    while(first<=last)
    {
     mid=(first+last)/2;
     if(y>b[mid])
     {
      first=mid+1; 
     }
     else if(y<b[mid])
     {
      last=mid-1;
     }
     else
     {
       output(mid,y);
       exit(0);
     }
    
  }
}
void output(int x,int y)
{
 printf("The value %d is found at the position %d in the array\n",y,x+1);
}
int main()
{
  input();
  return 0;
}

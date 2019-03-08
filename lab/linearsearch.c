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
int search()
{
  int x;
  printf("Enter the number to be searched\n");
  scanf("%d",&x);
  return x;
}
void linearsearch(int a[],int x,int n,int *pos)
{
  int i;
  for(i=0;i<n;i++)
  {
    if(a[i]==x)
    {
     *pos=i+1;
    }
  }
}
void output(int x,int pos)
{
 printf("The value %d is found at the position %d in the array\n",x,pos);
}

int main()
{
  int n,x,pos;
  n=array_size();
  int a[n];
  array(a,n);
  x=search();
  linearsearch(a,x,n,&pos);
  output(x,pos);
  return 0;
}

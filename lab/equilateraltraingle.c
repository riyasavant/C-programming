#include<stdio.h>
int input_rows()
{
  int rows;
  printf("Enter the number of rows\n");
  scanf("%d",&rows);
  return rows;
}
void pyramid(int rows)
{
  int i,j,r;
  r=rows;
  for(i=0;i<rows;i++)
  {
   for(j=0;j<r-1;j++)
   { 
    printf(" ");
   }
   for(j=0;j<(2*i)+1;j++)
   {
    printf("*");
   }
   printf("\n");
   r--;
  }
}
void result()
{
 printf("The pyramid is given as\n\n");
}
int main()
{
  int x;
  x=input_rows();
  result();
  pyramid(x);
  return 0;
}

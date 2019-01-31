#include<stdio.h>
int input()
{
  int rows;
  printf("Enter the number of rows\n");
  scanf("%d",&rows);
  return rows;
}
void compute(int rows)
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
void output()
{
 printf("The pyramid is given as\n\n");
}
int main()
{
  int x;
  x=input();
  output();
  compute(x);
  return 0;
}


#include<stdio.h>

struct sudoku
{
 int n;
 int a[9][9];
};

void instances(struct sudoku *s)
{
 printf("Enter the number of instances\n");
 scanf("%d",&s->n);
}

void input_sudoku(struct sudoku *s)
{ 
 printf("Enter the entries of the sudoku board\n");
  for(int i=0;i<9;i++)
  {
   for(int j=0;j<9;j++)
   {
    scanf("%d",&s->a[i][j]);
   }
  }
}

void calculation(struct sudoku s,int *empty,int *row,int *col,int *subm)
{
 int i,j,k,y=0;
 for(i=0;i<9;i++)
 {
  for(j=0;j<9;j++)
  {
   if(s.a[i][j]==0)
   {
    *empty=0;
   }
  }
 }
 for(i=0;i<9;i++)
 {
  for(j=0;j<9;j++)
  {
   if((s.a[i][j]==s.a[i][j+1]))
   {
    *row=0;
   }
  }
 }
 for(i=0;i<9;i++)
 {
  for(j=0;j<9;j++)
  {
   if((s.a[j][i]==s.a[j+1][i]))
   {
    *col=0;
   }
  }
 }
 for(i=y;i<y+3;i++)
 {
  for(j=y;j<y+3;j++)
  {
   for(k=y;j<y+3;k++)
   {
    if((s.a[i][j]==s.a[i][k])&&(k!=y))
    {
     *subm=0;
    }
   }
  }
 }
}

void result(int row,int col,int subm,int empty)
{
 if(subm==0||row==0||col==0)
 {
  printf("Not viable");
 }
 else if((empty=0)&&(subm!=0&&row!=0&&col!=0))
 {
  printf("Incomplete but viable");
 }
 else if((empty!=0)&&(subm!=0&&row!=0&&col!=0))
 {
  printf("Complete");
 }
}

int main()
{
 int empty,row,col,subm;
 struct sudoku s;
 input_sudoku(&s);
 calculation(s,&empty,&row,&col,&subm);
 result(row,col,subm,empty);
 return 0;
}
 


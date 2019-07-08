#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int compare(const void *a,const void *b)
{
 if(char *a[0]>char *b[0])
 {
  return -1;
 }
 else
 {
  return 1;
 }
}

int input()
{
 int n;
 printf("Enter the number of strings\n");
 scanf("%d",&n);
 return n;
}

void input_string(int n,char str[n])
{
 printf("Enter the strings\n");
 for(int i=0;i<n;i++)
 {
  scanf("%s",str[i]);
 }
}

int main()
{
 int n=input();
 char str[n];
 input_string(n,str);
 qsort(str,n,10,compare);
 printf("The string after sorting is\n");
 for(int i=0;i<n;i++)
 {
  printf("%s\n",str[i]);
 }
 return 0;
}

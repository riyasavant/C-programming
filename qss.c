#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int compare(const void *a,const void *b)
{
 int n=strcmp((char *)a,(char *)b);
 return n;
}

int input()
{
 int n;
 printf("Enter the number of strings\n");
 scanf("%d",&n);
 return n;
}

void input_string(int n,char str[n][10])
{
 printf("Enter the strings\n");
 for(int i=0;i<n;i++)
 {
  scanf("%s",str[i]);
 }
}

void sorted_string(int n,char str[n][10])
{
 printf("The string after sorting is\n");
 for(int i=0;i<n;i++)
 {
  printf("%s\n",str[i]);
 }
}

int main()
{
 int n=input();
 char str[n][10];
 input_string(n,str);
 qsort(str,n,10,compare);
 sorted_string(n,str);
 return 0;
}

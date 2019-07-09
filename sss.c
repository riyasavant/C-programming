#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int compare(const void *a,const void *b)
{
 const char *p=*(const char **)a;
 const char *q=*(const char **)b;
 int n=strcmp((char *)p,(char *)q);
 return n;
}

int input()
{
 int n;
 printf("Enter the number of strings\n");
 scanf("%d",&n);
 return n;
}

void input_string(int n,char *s[])
{
 char str[20];
 printf("Enter the strings\n");
 for(int i=0;i<n;i++)
 {
  scanf("%s",str);
  s[i]=malloc(sizeof(str)+1);
  printf("%s",s[i]);
 }
}

int main()
{ 
 int n;
 n=input();
 char *str[20];
 input_string(n,str);
 qsort(str,n,sizeof(char *),compare);
 printf("The strings after sorting are\n");
 for(int i=0;i<n;i++)
 {
  printf("%s",str[i]);
 }
 return 0;
}

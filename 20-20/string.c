#include<stdio.h>
#include<string.h>

struct string
{
 char s1[100];
};

/*int instances()
{
 int n;
 printf("Enter the number of trials\n");
 scanf("%d",&n);
 return n;
}*/

int rows()
{
 int n;
 printf("Enter the number of rows\n");
 scanf("%d",&n);
 return n;
}

void strings(struct string s[])
{
 printf("Enter the first string\n");
 scanf("%s",s[0].s1);
 printf("Enter the second string\n");
 scanf("%s",s[1].s1);
}

/*void size(int *n1,int *n2,struct string s[])
{
 *n1=strlen(s[0].s1);
 *n2=strlen(s[1].s2);
}*/

void fibonacci(struct string s[],int n)
{
 printf("%s\n%s\n",s[0].s1,s[1].s1);
 for(int i=2;i<=n;i++)
 {
  printf("%s\n",strcat(s[i-2].s1,s[i-1].s1));
  
 }
}

/*void output(int n,struct string s[])
{
 for(int i=0;i<n;i++)
 {
  printf("%s\n",s[i].s1);
 }
}*/

int main()
{
 int r;
 r=rows();
 struct string s[r];
 strings(s);
 fibonacci(s,r);
 
 
}


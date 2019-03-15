#include<stdio.h>
#include<string.h>

struct string_fibonacci
{
 char s1[100],s2[100];
 int rows;
};

int instances()
{
 int n;
 printf("Enter the number of trials\n");
 scanf("%d",&n);
 return n;
}

void row(struct string_fibonacci *a)
{
 printf("Enter the number of rows\n");
 scanf("%d",&a->rows);
}

void strings(struct string_fibonacci s[])
{
 printf("Enter the first string\n");
 scanf("%s",s[0].s1);
 printf("Enter the second string\n");
 scanf("%s",s[1].s1);
 printf("----------------\n");
}

void fibonacci(int n,struct string_fibonacci s[],struct string_fibonacci s3[])
{
 strcpy(s3[0].s2,s[0].s1);
 strcpy(s3[1].s2,s[1].s1);
 for(int i=2;i<=n;i++)
 {
  strcat(s[i-2].s1,s[i-1].s1);
  strcpy(s3[i].s2,s[i-2].s1);
  strcpy(s[i].s1,s[i-2].s1); 
 }
}

void output(int n,struct string_fibonacci s[])
{
 for(int i=0;i<n;i++)
 {
  printf("%s\n",s[i].s2);
 }
}

int main()
{
 int n;
 n=instances();
 struct string_fibonacci a;
 while(n>0)
 {
 row(&a);
 struct string_fibonacci s[a.rows];
 struct string_fibonacci s3[a.rows];
 strings(s);
 fibonacci(a.rows,s,s3);
 output(a.rows,s3);
 n--;
 }
 return 0;
}

#include<stdio.h>
#include<string.h>

struct string
{
 char a[100];
 char b[100];
};

struct string_fibonacci
{
 struct string s[100];
 char c[100];
 int rows;
};

int instances()
{
 int n;
 printf("Enter the number of trials\n");
 scanf("%d",&n);
 return n;
}

void row(struct string_fibonacci *f)
{
 printf("Enter the number of rows\n");
 scanf("%d",&f->rows);
}

void strings(struct string_fibonacci *f)
{
  printf("Enter the first and second string\n");
  scanf("%s %s",f->s[0].a,f->s[0].b);
  printf("----------------\n");
}

void fibonacci(struct string_fibonacci *f,struct string_fibonacci sf[])
{
  strcpy(sf[0].c,f->s[0].a);
  strcpy(sf[1].c,f->s[0].b);
 for(int i=2;i<(f->rows);i++)
 {
  strcat(f->s[i-2].a,f->s[i-2].b);
  strcpy(sf[i].c,f->s[i-2].a);
  strcpy(f->s[i-1].b,f->s[i-2].a);
  strcpy(f->s[i-1].a,f->s[i-2].b); 
 }
}

void output(struct string_fibonacci f,struct string_fibonacci sf[])
{
 for(int i=0;i<(f.rows);i++)
 {
  printf("%s\n",sf[i].c);
 }
}

int main()
{
 int n;
 n=instances();
 while(n>0)
 {
 struct string_fibonacci f;
 row(&f);
 strings(&f);
 struct string_fibonacci sf[f.rows];
 fibonacci(&f,sf);
 output(f,sf);
 n--;
 }
 return 0;
}

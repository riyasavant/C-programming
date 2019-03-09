#include<stdio.h>
void input_string(char str[])
{
 printf("Enter the string\n");
 scanf("%s",str);
}
void string_length(char str[],int *x)
{
 int c=0,i=0;
 while(str[i]!='\0')
 {
  i++;
  c++;
 }
 *x=c;
}
void copystring(char str[],int n,char str2[])
{
 int i;
 for(i=0;i<n;i++)
 {
  str2[i]=str[i];
 }
}
void output(char str[])
{
 printf("The string after copying is %s",str);
}
int main()
{
 char str[50];
 int x;
 char str2[x];
 input_string(str);
 string_length(str,&x);
 copystring(str,x,str2);
 output(str2);
 return 0;
}



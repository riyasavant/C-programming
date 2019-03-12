#include<stdio.h>
struct studentdetails
{
  char name[20];
  char department[20];
  int  rollno,marks;
  char grade[2];
};
int numofstudents()
{
 int n;
 printf("Enter the total number of students\n");
 scanf("%d",&n);
 return n;
}
void input(int n,struct studentdetails f[])
{
 int i;
 printf("Enter the details of the student\n\n");
 for(i=1;i<=n;i++)
 {
  printf("Roll no-\nName-\nDepartment-\nMarks-\nGrade-\n");
  scanf("%d%s%s%d%s",&f[i].rollno,f[i].name,f[i].department,&f[i].marks,f[i].grade);
 }
};
int searchrollno()
{
 int n;
 printf("Enter the roll no of the student to print the details\n");
 scanf("%d",&n);
 return n;
}
void output(struct studentdetails f[],int n,int x)
{
 int i;
 for(i=1;i<=x;i++)
 {
   if(n==f[i].rollno)
   {
    printf("The student details are\nRoll no-%d\nName-%s\nDepartment-%s\nMarks-%d\nGrade-%s",n,f[i].name,f[i].department,f [i].marks,f[i].grade);
   }
 }
};

int main()
{
 int n,x;
 n=numofstudents();
 struct studentdetails f[n];
 input(n,f);
 x=searchrollno();
 output(f,x,n);
 return 0;
}


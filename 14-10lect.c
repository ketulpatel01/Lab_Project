//Q.1 Write a Program to create Student Record System for 3 students using structure. Consider the below-mentioned attributes in the Student structure:
#include <stdio.h>
struct Student
{
  int stu_id, stu_age, stu_standard;
  char stu_name[100], stu_course[50], stu_city[50], stu_school[100];
} s[3];
int main ()
{
  for(int i=0; i<3; i++)
  {
    printf("Enter the detail for std%d:\n",i+1);
    printf("Enter student ID: ");
    scanf("%d",&s[i].stu_id);
    printf("Enter student Name: ");
    scanf("%s",&s[i].stu_name);
    printf("Enter student age: ");
    scanf("%d",&s[i].stu_age);
    printf("Enter student course: ");
    scanf("%s",&s[i].stu_course);
    printf("Enter student city: ");
    scanf("%s",&s[i].stu_city);
    printf("Enter student standard: ");
    scanf("%d",&s[i].stu_standard);
    printf("Enter student school: ");
    scanf("%s",&s[i].stu_school);
    printf("---------------------------------\n");
  }
  for(int i=0; i<3; i++)
  {
    printf("Detail of std %d:\n",i+1);
    printf("student ID: %d\n",s[i].stu_id);
    printf("Student Name: %s\n",s[i].stu_name);
    printf("Student age: %d\n",s[i].stu_age);
    printf("Student course: %s\n",s[i].stu_course);
    printf("Student city: %s\n",s[i].stu_city);
    printf("Student standard: %d\n",s[i].stu_standard);
    printf("Student school: %s\n",s[i].stu_school);
    printf("---------------------------------\n");
  }
  return 0;
}

//Q2 create a file named project.txt and preform CRUD operation
#include <stdio.h>
int main ()
{
  FILE *p1, *p2;
  char data[50];
  p1=fopen("project.txt","w");  //to create file
  fputs("Hi HEllo",p1);         //to update in file
  p2=fopen("project.txt","r"); 
  fgets(data,25,p2);            //to read file
  printf("%s",data);
  fclose(p1);
  fclose(p2);
  remove("project.txt");        //to delete file
  return 0;
}

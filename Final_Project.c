//Q1. print "Hello world" 
#include <stdio.h>
int main ()
{
  printf("Hello world");
  return 0;
}


//Q2  print full name of user by taking input
#include <stdio.h>
#include <string.h>
int main ()
{
  char name[100];
  printf("Enter your Full name: ");
  gets(name);
  puts(name);
  return 0;
}


// Q2.1 given three variable and print which is greater of all
#include <stdio.h>
int main()
{
  int a = 10, b = 200, c = 30, d;
  d = a > b ? a : b;
  d > c ? printf("%d is greater.", d) : printf("%d is greater.", c);

  return 0;
}


// Q2.2 take user  age and tell  him/her that he/she can vote or not
#include <stdio.h>
int main()
{
  int age;
  printf("Enter your age: ");
  scanf("%d", &age);
  if (age >= 18)
    printf("You can vote.");
  else
    printf("You can not vote.");
  return 0;
}


//Q3 Write a program  using UDF and swap two values and return
#include <stdio.h>
int swap(int x, int y)
{
  int temp;
  temp=x;
  x=y;
  y=temp;
  printf("After swap a=> %d, b => %d\n",x,y);
  return 0;
}
int main()
{
  int a=20, b=10, c;
  printf("Before swap a=> %d, b => %d\n",a,b);
  swap(a,b);
  return 0;
}


// Q4 take year from user and print is it leap year or not
#include <stdio.h>
int main()
{
    int year;
    printf("Enter year: ");
    scanf("%d", &year);
    if (year % 4 == 0)
        printf("%d is leap year.", year);
    else
        printf("%d is not leap year.", year);
    return 0;
}


//Q5 print hallow Rectangle
#include <stdio.h>
int main()
{
    printf("Hollow Rectangle:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (i==0 || i==3 || j==0 || j==6)
                printf("* ");
            else
                printf("  ");  
        }
        printf("\n");
    }   
    return 0;
}


//Q6 write a program which will be hold the record of 10 employ  (using structure) empoy_id ,name,salary
#include <stdio.h>
#include <string.h>
struct employ
{
  int empoy_id, salary;
  char name[100];
} e[10];

int main()
{
  e[0].empoy_id=1;    strcpy(e[0].name,"Patel Ketul");    e[0].salary=5000000;
  e[1].empoy_id=2;    strcpy(e[1].name,"Patel Dev");      e[1].salary=100000;
  e[2].empoy_id=3;    strcpy(e[2].name,"Patel Vansh");    e[2].salary=150000;
  e[3].empoy_id=4;    strcpy(e[3].name,"Patel Mit");      e[3].salary=200000;
  e[4].empoy_id=5;    strcpy(e[4].name,"Patel Jay");      e[4].salary=250000;
  e[5].empoy_id=6;    strcpy(e[5].name,"Patel Ved");      e[5].salary=300000;
  e[6].empoy_id=7;    strcpy(e[6].name,"Patel Smit");     e[6].salary=350000;
  e[7].empoy_id=8;    strcpy(e[7].name,"Patel Fenil");    e[7].salary=400000;
  e[8].empoy_id=9;    strcpy(e[8].name,"Patel Pujan");    e[8].salary=450000;
  e[9].empoy_id=10;   strcpy(e[9].name,"Patel Vedant");   e[9].salary=500000;
  
  printf("All employ record:\n");
  for (int i = 0; i < 10; i++)
  {
    printf("------------------------\n");
    printf("Employ Id => %d\n",e[i].empoy_id);
    printf("Employ Name => %s\n",e[i].name);
    printf("Employ Salary => %d\n",e[i].salary);
  }
  return 0;
}

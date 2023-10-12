//Q.1 Write a Program to swap two variables using Pointers. and use UDF
#include <stdio.h>
int swap(int *x, int *y)
{
  int temp;
  temp=*x;
  *x=*y;
  *y=temp;
  printf("After Swap a => %d && b => %d",*x,*y);
  return 0;
}
int main ()
{
  int a=5, b=3;
  printf("Before Swap a => %d && b => %d\n",a,b);
  swap(&a,&b);
  return 0;
}


//Q2. Given an array of length 5 print memory location of array
#include <stdio.h>
int main ()
{
  int arr[5]={1,2,3,4,5};
  int *p;
  p=&arr[5];
  for (int i=0; i<5; i++)
  {
    printf("=> %u\n",p+i);
  }
  return 0;
}


//Q3. Given a int a=20 ;find the value of a using chain of pointer
#include <stdio.h>
int main ()
{
  int a=20, *p, **p1;
  p=&a;
  p1=&p;
  printf("Using One Pointer=> %u => %d\n",p,*p);
  printf("Using Chain Pointer=> %u => %d\n",p1,**p1);
  return 0;
}

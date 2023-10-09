//1. write a function which takes an array and return sum of array
#include<stdio.h>
int arrayfunction(int ar[])
{
    int sum=0;
    for (int i = 0; i < 5; i++)
    {
        sum += ar[i];
    }
    return sum;
}
int main()
{
    int arr[5] = {1,3,5,7,9};
    int a=arrayfunction(arr);
    printf("Sum of array => %d",a);
    return 0;
}

//2. write a function which returns your full name
#include<stdio.h>
#include<string.h>
int namefunction()
{
    char na[50];
    printf("Enter your full name: ");
    gets(na);
    puts(na);
}
int main()
{
    namefunction();
    return 0;
}

//3. find the factorial of 10
#include<stdio.h>
int factorial(int a)
{
    if(a == 1)
        return 1;
    else
        return a*factorial(a-1);
}
int main()
{
    printf("Factorial of 10 => %d",factorial(10));
    return 0;
}
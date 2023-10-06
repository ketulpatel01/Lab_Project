// Q.1 Write a Program to check whether a string is a palindrome or not without using string functions.
#include <stdio.h>
int main()
{
    char str[10], rev[10];
    int len = 0;

    printf("Enter the string : ");
    scanf("%s", &str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        len++;
    }
    for (int i = len - 1; i >= 0; i--)
    {
        rev[len - i - 1] = str[i];
    }
    if (rev == str)
    {
        printf("Given string is a Palindrome.");
    }
    else
    {
        printf("Given string is not a Palindrome");
    }
    return 0;
}


// Q.2 Write a Program to count the frequency of each character in a given string.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];
    int count = 0, n = 0;

    printf("Enter the string : ");
    scanf("%s", &str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        n++;
    }
    printf("Frequency of each letter:\n");
    for (int i = 0; i < n ; i++)
    {
        count = 1;
        if (str[i])
        {
            for (int j = i + 1; j < n; j++)
            {
                if (str[i] == str[j])
                {
                    count++;
                    str[j] = '\0';
                }
            }
            printf("%c => %d \n", str[i], count);
        }
    }
    return 0;
}
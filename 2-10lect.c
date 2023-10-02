//Q.1 Write a Program to find all the negative elements from a given 1D array

#include <stdio.h>
int main()
{
    int arr[10],size;

    printf("Enter the array's size(1-10): ");
    scanf("%d",&size);

    printf("Enter array's elements: \n");
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    
    printf("Negative elements from an Array: ");
    for (int i = 0; i < size; i++)
    {
        if(arr[i] < 0)
            printf("%d, ",arr[i]);
    }
    return 0;
}


//Q.2 Write a Program to find the largest element from a given 2D array.
#include <stdio.h>
int main()
{
    int arr[10][10],row,colum;

    printf("Enter the array's row size(1-5): ");
    scanf("%d",&row);
    printf("Enter the array's column size(1-5): ");
    scanf("%d",&colum);

    printf("Enter array's elements: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colum; j++)
        {
            printf("arr[%d][%d] = ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    
    printf("The largest element is: ");
    int temp=0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colum; j++)
        {
            if (arr[i][j]>temp)
            {
                temp = arr[i][j];
            }
        }
    }
    printf("%d",temp);
    return 0;
}


//Q.3 Write a Program to find the transpose matrix of a given 2D array.
#include <stdio.h>
int main()
{
    int arr[10][10],size;

    printf("Enter the array's row & column size(1-5): ");
    scanf("%d",&size);

    printf("Enter array's elements: \n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("arr[%d][%d] = ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    
    printf("\nThe transpose matrix of an array: \n");
    int temp=0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
           printf("%d  ",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}


//Q.4 Write a Program to print and find the sum of all elements of a given row & column from a 2D array.
#include <stdio.h>
int main()
{
    int arr[10][10],row,colum,r,c,rsum=0,csum=0;

    printf("Enter the array's row size(1-5): ");
    scanf("%d",&row);
    printf("Enter the array's column size(1-5): ");
    scanf("%d",&colum);

    printf("Enter array's elements: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colum; j++)
        {
            printf("arr[%d][%d] = ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    
    printf("\nEnter row number: ");
    scanf("%d",&r);

    printf("Elements of row %d: ",r);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colum; j++)
        {
            if (i == r)
            {
                printf("%d, ",arr[i][j]);
                rsum += arr[i][j];
            }
        }
    }
    printf("\nThe sum of a row %d: %d\n",r,rsum);

    printf("\nEnter column number: ");
    scanf("%d",&c);

    printf("Elements of column %d: ",c);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colum; j++)
        {
            if (j == c)
            {
                printf("%d, ",arr[i][j]);
                csum += arr[i][j];
            }
        }
    }
    printf("\nThe sum of a row %d: %d",c,csum);
    return 0;
}
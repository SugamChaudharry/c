// ⦁	WAP to input a matrix and check if its identity matrix or not.

#include <stdio.h>

int main()
{
    int n, m;
    printf("plz enter no of coloum : ");
    scanf("%d", &m);
    printf("plz enter no of row : ");
    scanf("%d", &n);
    int arr[m][n];
    int arr2[m][n];
    printf("enter %d values 1st array: \n", m * n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("enter %d values of 2ed array: \n", m * n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    printf("\n");


    int notEqual = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf(" %d \t", arr[i][j]);
        }
        printf("\n");
    }

    for (int a = 0; a < m; a++)
    {
        for (int b = 0; b < n; b++)
        {
            if (arr[a][b] != arr2[a][b])
                notEqual = 1;
        }
    }
    if (notEqual == 0)
    {
        printf("\n  is equal to  \n\n");
    }
    else{
        printf("\n  is not equal to  \n\n");
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf(" %d \t", arr2[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
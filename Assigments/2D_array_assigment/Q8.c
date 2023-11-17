// ⦁	WAP to input 2 matrices from the user and add them.

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

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("arr[%d][%d] = %d \n", i, j, arr[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf(" %d \t", arr[i][j]);
        }
        printf("\n");
    }
    printf("\t +\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf(" %d \t", arr2[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf(" %d \t", arr[i][j] + arr2[i][j]);
        }
        printf("\n");
    }
}
// WAP to input a 2D array of size M*N and find the sum of individual rows and individual columns.
#include <stdio.h>
int main()
{
    int n, m, sum;
    printf("plz enter no of coloum : ");
    scanf("%d", &m);
    printf("plz enter no of row : ");
    scanf("%d", &n);
    int arr[m][n];
    printf("enter %d values : \n", m * n);

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
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
    for (int i = 0; i < m; i++)
    {
        sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += arr[i][j];
        }
        printf("sum of row %d is : %d \n" ,i+1 ,sum);
    }
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum += arr[j][i];
        }
        printf("sum of column %d is : %d \n" ,i+1 ,sum);
    }
    
}
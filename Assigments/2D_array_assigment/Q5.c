// WAP to input a 2D array of size M*N and display the transpose of it.
#include <stdio.h>
int main()
{
    int n, m;
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
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < m; i++)
        {
            printf(" %d \t", arr[i][j]);
        }
        printf("\n");
    }
}
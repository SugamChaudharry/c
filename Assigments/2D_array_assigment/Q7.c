// WAP to input a 2D array and display diagonal elements in matrix form.

#include <stdio.h>
int main()
{
    int m;
    printf("plz enter no of coloum / row : ");
    scanf("%d", &m);
    int arr[m][m];
    printf("enter %d values : \n", m * m);

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == j || i + j == m - 1)
            {
                printf(" %d \t" , arr[i][j]);
            }
            else printf("\t");
        }
        printf("\n");
    }
}
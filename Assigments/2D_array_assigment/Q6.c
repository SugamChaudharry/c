// WAP to input a 2D array and find the sum of its diagonal elements.
#include <stdio.h>
int main()
{
    int  m, sum = 0;
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
            printf(" %d \t", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i==j || i+j == m-1 )
            {
                sum += arr[i][j];
            }
            
        }
    }
    printf("sum of diagonal elements = %d", sum);
}
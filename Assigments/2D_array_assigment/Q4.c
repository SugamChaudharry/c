// WAP to input a 2D array of size M*N and display boundary elements in matrix form.
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
            if (i == 0 || i == m-1 || j == 0 || j == n-1 )
            {
            printf(" %d \t", arr[i][j]); 
            }
            else{

            printf("\t");
            }
        }
        printf("\n");
    }
    
}
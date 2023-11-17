// WAP to input a 2D array of size M*N and find the sum and average of all the elements.
#include <stdio.h> 
int main()
{
    int n, m, sum = 0;
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
            sum += arr[i][j];
        }
    }
    printf("sum = %d \n" , sum);
    printf("avg = %d ", sum/m*n);
}
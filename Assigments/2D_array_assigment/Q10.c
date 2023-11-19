// Q10 WAP to input a matrix of order M*N and check if it’s sparse or dense matrix.
#include <stdio.h>

int main(){
    int n, m;
    int sparse = 0 , dense = 0;
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
    printf("\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] == 0 ? sparse++ : dense++;  
        }
        printf("\n");
    }
    sparse > dense ? printf("sparse"): printf("dense");
}

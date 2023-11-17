// WAP to input a 2D array of size M*N and display it in tabular form.
#include<stdio.h>
int main(){
    int n , m;
    printf("plz enter no of coloum : ");
    scanf("%d",&m);
    printf("plz enter no of row : ");
    scanf("%d",&n);
    int arr[m][n];
    printf("enter %d values : \n" , m*n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf( "%d", (&arr[i][j]));
        }
        
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf( "arr[%d][%d] = %d \n", i , j ,arr[i][j]);
        }
        
    }
    printf("\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf( " %d \t", arr[i][j]);
        }
        printf("\n");
    }
    
}
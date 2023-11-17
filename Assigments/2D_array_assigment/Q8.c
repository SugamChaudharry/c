// ⦁	WAP to input 2 matrices from the user and add them.
#include <stdio.h>
int main()
{
    int m , n;
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
    
}
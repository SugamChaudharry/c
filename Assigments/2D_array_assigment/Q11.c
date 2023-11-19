// Write a program in C to calculate determinant of a 3 x 3 matrix

#include <stdio.h>

int main()
{
    int arr[3][3];
    printf("Enter 9 values for the 3x3 matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int determinant = arr[0][0] * (arr[1][1] * arr[2][2] - arr[2][1] * arr[1][2]) -
                      arr[0][1] * (arr[1][0] * arr[2][2] - arr[2][0] * arr[1][2]) +
                      arr[0][2] * (arr[1][0] * arr[2][1] - arr[2][0] * arr[1][1]);

    printf("Determinant = %d\n", determinant);

    return 0;
}

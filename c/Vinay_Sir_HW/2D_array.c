#include <stdio.h>

int main()
{
    int n = 2, m = 3;
    //1)
    // int Arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    //2)
    // int Arr[2][3] = {{1, 2, 3};
    //3)
    // int Arr[2][3] = {};
    //1)
    // int Arr[2][3] = {{1, 2}, {4}};
    // 1)
    // int Arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    // 1)
    // int Arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    // 1)
    // int Arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    // 1)
    // int Arr[2][3] = {{1, 2, 3}, {4, 5, 6}};

    printf("Arr[%d][%d] = {", n, m);

    for (int i = 0; i < n; i++)
    {
        printf("{");
        for (int j = 0; j < m; j++)
        {
            printf(" %d ", Arr[i][j]);
            if (j < m - 1)
            {
                printf(",");
            }
        }
        printf("}");
        if (i < n - 1)
        {
            printf(",");
        }
    }

    printf("};\n"); 

    return 0;
}

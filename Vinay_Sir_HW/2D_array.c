#include <stdio.h>

int printing(int Arr[][3], int n, int m)
{
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
}

int main()
{
    // 1)
    int Arr0[2][3] = {{1, 2, 3}, {4, 5, 6}};
    printing(Arr0, 2, 3);
    // Arr[2][3] = {{ 1 , 2 , 3 },{ 4 , 5 , 6 }};

    // 2)
    int Arr1[2][3] = {{1, 2, 3}};
    printing(Arr1, 2, 3);
    // Arr[2][3] = {{ 1 , 2 , 3 },{ 0 , 0 , 0 }};

    // 3)
    int Arr2[2][3] = {};
    printing(Arr2, 2, 3);
    // Arr[2][3] = {{ 0 , 0 , 0 },{ 0 , 0 , 0 }};
    // 4)
    int Arr3[2][3] = {{1, 2}, {4}};
    printing(Arr3, 2, 3);
    // Arr[2][3] = {{1, 2, 0}, {4, 0, 0}};

    /*
     5)
    warning: excess elements in array initializer
     int Arr4[2][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
                                             ^
    int Arr4[2][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    printing(Arr4, 3, 3);
    */

    // 6)
    int Arr5[2][3] = {[0][1] = 1, [1][2] = 5};
    printing(Arr5, 2, 3);
    // Arr[2][3] = {{0, 1, 0}, {0, 0, 5}};

    /*
    7)
    error: array index in initializer exceeds array bounds
     int Arr6[2][3] = {[0][1] = 1, [1][2] = 5, [2][1] = 99};
                                                ^

    int Arr6[2][3] = {[0][1] = 1, [1][2] = 5, [2][1] = 99};
    printing(Arr6, 3, 3);
     */

    //     // 8)
    //     {warning: excess elements in array initializer
    //     int Arr7[2][3] = {[0][1] = 1, 2, 3, [1][2] = 5, 7, 8, 9};
    //     ^~~
    //     }
    // int Arr7[2][3] = {[0][1] = 1, 2, 3, [1][2] = 5, 7, 8, 9};
    // printing(Arr7, 2, 3);

    /*
     9)
     error: array type has incomplete element type 'int[]'
     int Arr8[2][] = {{1, 2, 3}, {4, 5, 6}};
         ^~~~
    int Arr8[2][] = {{1, 2, 3}, {4, 5, 6}};
    printing(Arr8, 2, 3);
    */

    // 10) don't know how to print
    // int Arr9[][3] = {{1, 2, 3}, {4, 5, 6}};
    // printing(Arr9, 2, 3);

    return 0;
}

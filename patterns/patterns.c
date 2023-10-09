#include <stdio.h>

int pattern1(int n);
int pattern2(int n);
int pattern3(int n);
int pattern4(int n);
int pattern5(int n);
int pattern6(int n);
int main()
{
    printf("Q1-------------------------------------------\n");
    pattern1(5);
    printf("Q2-------------------------------------------\n");
    pattern2(5);
    printf("Q3-------------------------------------------\n");
    pattern3(5);
    printf("Q4-------------------------------------------\n");
    pattern4(5);
    printf("Q5-------------------------------------------\n");
    pattern5(5);
    printf("Q6-------------------------------------------\n");
    pattern6(5);
    return 0;
}

/*1.
    *
    **
    ***
    ****
    *****
*/

    int pattern1(int n ){
        for(int row = 1 ; row <=n ; row++ ){
            for (int col = 0; col < row; col++)
            {
                printf("*");
            } 
            printf("\n");
        }
    }

/*2.
*****
*****
*****
*****
*****

*/

    int pattern2(int n ){
        for(int row = 1 ; row <=n ; row++ ){
            for (int col = 0; col < n; col++)
            {
                printf("*");
            } 
            printf("\n");
        }
    }


/*3.
    *****
    ****
    ***
    **
    *
*/
    int pattern3(int n ){
        for(int row = 1 ; row <=n ; row++ ){
            for (int col = n - row + 1; col >= 1; col--)
            {
                printf("*");
            } 
            printf("\n");
        }
    }

/*4.
    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5
*/

    int pattern4(int n ){
        for(int row = 1 ; row <=n ; row++ ){
            int a = 1;
            for (int col = 0; col < row; col++ , a++)
            {
                printf("%d", a);
            }
            printf("\n");
        }
    }

/*5.
    *
    **
    ***
    ****
    *****
    ****
    ***
    **
    *
*/
    int pattern5(int n ){
        for(int row = 0 ; row <= n*2 ; row++ ){
            int totalCol = row >  n? 2*n-row:row; 
            for (int col = 0; col <= totalCol ; col++)
            {
                printf("* ");
            }
            printf("\n");
        }

/*28.
    *
   * *
  * * *
 * * * *
* * * * *
 * * * *
  * * *
   * *
    *
*/
    }

    int pattern28(int n ){
        for(int row = 0 ; row <= n*2 ; row++ ){
            int totalCol = row >  n? 2*n-row:row;
            int spaces = n - totalCol;
            for (int s = 0 ; s < spaces; s++)
            {
                printf(" ");
            }
            
            for (int col = 0; col <= totalCol ; col++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
#include <stdio.h>

int pattern1(int n);
int pattern2(int n);
int pattern3(int n);
int pattern4(int n);
int pattern5(int n);
int pattern6(int n);
int pattern7(int n);
int pattern8(int n);
int pattern9(int n);
int pattern10(int n);
int pattern11(int n);
int pattern12(int n);
int pattern28(int n);
int main()
{int n = 5;
    printf("Q1-------------------------------------------\n");
    pattern1(n);
    printf("Q2-------------------------------------------\n");
    pattern2(n);
    printf("Q3-------------------------------------------\n");
    pattern3(n);
    printf("Q4-------------------------------------------\n");
    pattern4(n);
    printf("Qn-------------------------------------------\n");
    pattern5(n);
    printf("Q6-------------------------------------------\n");
    pattern6(n);
    printf("Q7-------------------------------------------\n");
    pattern7(n);
    printf("Q8-------------------------------------------\n");
    pattern8(n);
    printf("Q9-------------------------------------------\n");
    pattern9(n);
    printf("Q10-------------------------------------------\n");
    pattern10(n);
    printf("Q11-------------------------------------------\n");
    pattern11(n);
    printf("Q12-------------------------------------------\n");
    pattern12(n);
    printf("Q28-------------------------------------------\n");
    pattern28(n);
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
                printf("* ");
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
                printf("* ");
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
                printf("* ");
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
                printf("%d ", a);
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
    }

/*
6.
        *
      * *
    * * *
  * * * *
* * * * *
*/

    int pattern6(int n){
        for (int row = 1; row <= n; row++)
        {
            for ( int gap = (n-row)*2 ; gap > 0 ; gap--)
            {
                printf(" ");
            }
            for ( int col = 0; col < row; col++)
            {
                printf("* ");
            }
            printf("\n");
        }
        
    }

/*
7.   *****
      ****
       ***
        **
         *
*/

    int pattern7(int n){
        for (int row = 1; row <= n; row++)
        {
            for ( int gap = 1 ; gap < row*2 ; gap++)
            {
                printf(" ");
            }
            for ( int col = n - row + 1 ; col > 0; col--)
            {
                printf("* ");
            }
            printf("\n");
        }
        
    }

/*
8.
        * 
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
*/

int pattern8(int n){
    for (int row = 1; row < n+1; row++)
    {
        for (int gap = (n - row)*2  ; gap > 0 ; gap--)
        {
            printf(" ");
        }
        for (int col = 1; col < row*2; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
}

/*
9.  * * * * * * * * *
      * * * * * * * 
        * * * * *
          * * *
            *
*/
int pattern9(int n){
    for(int row = 0 ; row <= n ; row++ ){
            int totalCol = 2*n-row;
            for (int s = 0 ; s < row*2; s++)
            {
                printf(" ");
            }
            
            for (int col = row + 1  , g = 1; col < totalCol ; col++ ,g++)
            {
                printf("* " , g);
            }
            printf("\n");
        }
    
}

/*
10.      *
        * *
       * * *
      * * * *
     * * * * *
*/

int pattern10(int n){
    for (int row = 1; row <= n; row++)
    {
        for (int gap = 0; gap < n - row; gap++)
        {
            printf(" ");
        }
        for (int col = 0; col < row; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
}
/*
11.  * * * * *
      * * * *
       * * *
        * *
         *
*/
int pattern11(int n){
    for (int row = 0; row < n; row++)
    {
        for (int gap = 0; gap < row; gap++)
        {
            printf(" ");
        }
        for (int col = n-row; col > 0; col--)
        {
            printf("* ");
        }
        printf("\n");
        
    }
    
}
/*
12.  * * * * *
      * * * *
       * * *
        * *
         *
         *
        * *
       * * *
      * * * *
     * * * * *
*/
int pattern12(int n){
    for (int row = 0; row < n; row++)
    {
        for (int gap = 0; gap < row; gap++)
        {
            printf(" ");
        }
        for (int col = n-row; col > 0; col--)
        {
            printf("* ");
        }
        printf("\n");
        
    }
    for (int row = 1; row <= n; row++)
    {
        for (int gap = 0; gap < n - row; gap++)
        {
            printf(" ");
        }
        for (int col = 0; col < row; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
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
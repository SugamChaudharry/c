/*
Write a c program to print fibonacci series without using recursion and using recursion.

Input: 10

Output: 0 1 1 2 3 5 8 13 21 34
*/

#include <stdio.h>
int main()
{
    int n, a = 0, b = 1, c = 0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", c);
        a = b;     // swap elements
        b = c;     // swap elements
        c = a + b; // next term is the sum of the last two terms
    }
    return 0;
}
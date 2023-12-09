/*Write a c program to check palindrome number.

Input: 329

Output: not palindrome number

Input: 12321

Output: palindrome number*/

#include <stdio.h>
int main(){
    int num , copy , sep = 0 , output = 0;
    printf("Enter a number :: ");
    scanf("%d",&num);
    copy = num;

    for ( ; 0 < num ; num = num/10)
    {
        sep = num%10;
        output = output * 10 + sep;
    }
    if (output == copy)
    {
        printf("palindrome number");
    }else{
        printf("not a palindrome number");
    }
    
    
}
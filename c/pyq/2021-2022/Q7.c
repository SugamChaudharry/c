#include <stdio.h>

int main(){
    int a,sum=0;
    printf("enter a value : ");
    scanf("%d" , &a);
    for (int i=1; i <= 31; i++ )
    {
        sum = sum + a;
    }
    printf("%d X 31 is %d: ", a ,sum);
}
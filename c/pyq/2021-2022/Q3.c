#include <stdio.h>

int main(){
    int a,b;
    printf("Enter two values :");
    scanf(" %d %d",&a,&b);
    a=a*b;
    b=a/b;
    a=a/b;
    printf("%d is a :", a);
    printf("%d is b :", b);
}
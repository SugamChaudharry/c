#include <stdio.h>

int main(){
    int a;
    printf("Enter number : ");
    scanf("a=%d",&a);
    switch (a%2==0)
    {
    case 1:
        printf("Enterd value is Even");
        break;
    case 0:
        printf("Enterd value is odd");
        break;
    }
}
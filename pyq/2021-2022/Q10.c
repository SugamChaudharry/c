#include <stdio.h>

int main(){
    int a = 0,b = 1,num,c;
    printf("Enter a value :");
    scanf("%d",&num);
    printf("%d ",a);
    printf(", %d ",b);
    for (int i = 0; i < num-1; i++,a=b,b=c)
    {
        c=a+b;
        printf(", %d  ",c);
    }
    
    
}
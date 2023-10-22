#include <stdio.h>

int main(){
    int num , factroialNum = 1 , sum = 0;
    printf("Enter a value :");
    scanf("%d",&num);
    int copy = num;
    while (num > 0)
    {
        int sep_dig = num%10;
        for (int i = 1; i <= sep_dig; i++)
        {
            factroialNum = factroialNum*i;
        }
        sum = factroialNum + sum;
        factroialNum=1;
        num = num/10;
    }
    if (copy == sum)
    {
        printf("%d is a strong number" , copy);
    }else{
        printf("%d is a not a strong number" , copy);
    }
    
}
#include <stdio.h>

int profit_OR_loss(int cost, int selling)
{
    int profit = selling - cost;
    if (profit > 0)
    {
        printf("Profit of %d", profit);
    }
    else if (profit < 0)
    {
        printf("Loss of %d", profit);
    }
    else
    {
        printf("No Profit No Loss");
    }
    return 0;
}

int main(){
    int cost , selling;
    printf("Enter the cost and selling price: ");
    scanf("%d %d",&cost,&selling);
    profit_OR_loss(cost,selling);
}
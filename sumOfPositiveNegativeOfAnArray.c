#include <stdio.h>

int main()
{
    int arr1[7], positiveSum = 0, negativeSum = 0;
    for (int i = 0; i < 7; i++)
        scanf("%d", &arr1[i]);

    
    for (int i = 0; i < 7; i++)
    {
        if (arr1[i] >= 0)
        {
            positiveSum += arr1[i];
        }
        else if (arr1[i] < 0)
        {
            negativeSum += arr1[i];
        }
        
    }
    printf("Sum of positive numbers = %d\n", positiveSum);
    printf("Sum of negative numbers = %d\n", negativeSum);
}
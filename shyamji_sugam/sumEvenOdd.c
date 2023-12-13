#include <stdio.h>

int main()
{
    int arr[6], odd = 0, even = 0;

    printf("Enter a number: ");
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 6; i++)
    {
        if (arr[i] % 2 != 0)
        {
            odd = odd + arr[i];
        }
        else{
            even += arr[i];
        }
    }
    printf("sum of odd = %d\n sum of even = %d" , odd , even);
}
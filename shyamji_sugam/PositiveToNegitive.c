#include <stdio.h>

int main()
{
    int n;
    printf("Enten number of number you want to enter : ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter a number: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("arr = {");
    for (int i = 0; i < n; i++)
    {
        if (i == n-1)
        {
            printf(" %d }\n", arr[i]);
            break;
        }
        printf(" %d ,", arr[i]);
    }

    printf("arr = {");
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
        {
            printf(" %d }\n", -1 * (arr[i]));
            break;
        }
        printf(" %d ,", -1 * (arr[i]));
    }
}
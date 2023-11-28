#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);
    for (int i = 1; i < strlen(str); i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%c ", str[j]);
        }
        printf("\n");
    }
    
}
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("Enter the string 1: ");
    gets(str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }
    printf("%s", str);
}
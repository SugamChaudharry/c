#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    char str2[100];
    printf("Enter the string 1: ");
    gets(str);
    printf("Enter the string 2: ");
    gets(str2);
    int cap = strcmp(str, str2);
    if (cap == 0)
    {
        printf("Both strings are equal");
    }
    else
    {
        printf("Both strings are not equal");
    }
}
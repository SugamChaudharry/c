#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    char str2[100];
    int i;
    printf("Enter the string 1: ");
    gets(str);    
    for (i = 0; str[i] != '\0'; i++)
    {
        str2[i] = str[i];
    }
    str2[i] = '\0';
    printf("First string = %s\n", str);
    printf("Second string = %s\n", str2);
    printf("Total characters copied = %d\n", i);
}
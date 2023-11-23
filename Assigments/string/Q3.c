#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    char str2[100];
    printf("Enter the string 1: ");
    gets(str);
    printf("Enter the string 2: ");
    gets(str2);

    // strcat(str, str2);
    // printf("Concatenated string with function = %s\n", str);

    int i, j;
    for ( i = 0; str[i] != '\0' ; i++);
    for ( j = 0; str2[j] != '\0'; i++,j++)
    {
        str[i] = str2[j];
    }
    str[i] = '\0';
    printf("Concatenated string without function = %s\n", str);
    
    
}
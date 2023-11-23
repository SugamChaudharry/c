#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i;
    printf("Enter the string: ");
    gets(str);
    int len = strlen(str);
    printf("with function length is= %d\n", len);
    len = 0;
    for (i=0 ; str[i] != '\0' ; i++)
    {
        len++;
    }
    printf("without function length is= %d", len);
} 
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    char find;
    int i, j;
    printf("Enter the string: ");
    gets(str);
    printf("Enter the string you want to find: ");
    scanf("%c", &find);
    printf("The index of %c is at these positions: ", find);
    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] == find)
        {
            j = i;
            printf("%d ", j);
        }
    }
    
}
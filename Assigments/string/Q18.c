#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], allAlpa[26]={},
    alpa[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int i;
    printf("Enter the string: ");
    gets(str);
    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'A' || str[i] <= 'Z')
        {
            allAlpa[str[i] - 65]++;
        }
        if (str[i] >= 'a' || str[i] <= 'z')
        {
            allAlpa[str[i] - 97]++;
        }
        
        
    }
    for (int i = 0; i < 26; i++)
    {
        printf("%c occurs %d times\n", alpa[i], allAlpa[i]);
    }
    
}
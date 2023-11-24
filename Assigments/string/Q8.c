#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("Enter the string 1: ");
    gets(str);

    int alp = 0  , num , spc = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'z')
        {
            alp++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            num++;
        }
        else
        {
            spc++;
        }  

    }
    printf("Alphabets: %d\n", alp);
    printf("Numbers: %d\n", num);
    printf("Special Characters: %d\n", spc);
}
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("Enter the string 1: ");
    fgets(str, sizeof(str), stdin);
    int A = 0, a = 0, b = 0, c = 0;
    char vow[100] , cons[100] , num[100], spc[100];
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'z')
        {

            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            {
                vow[A] = str[i];
                vow[A + 1] = '\0';
                A++;
            }
            else
            {
                cons[a] = str[i];
                cons[a + 1] = '\0';
                a++;
            }
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            num[b] = str[i];
            num[b + 1] = '\0';
            b++;
        }
        else
        {
            spc[c] = str[i];
            spc[c + 1] = '\0';
            c++;
        }
    }
    printf("vowels : %s\n", vow);
    printf("consonants : %s\n", cons);
    printf("numbers : %s\n", num);
    printf("special characters : %s\n", spc);
}
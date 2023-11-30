#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], allAlpa[26] = {} ,
                   alpa[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char temp;
    int i,j;
    int index = 0;
    printf("Enter the string: ");
    gets(str);
    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'A' || str[i] <= 'Z')
        {
            allAlpa[str[i] - 65]++;
        }
        else if(str[i] >= 'a' || str[i] <= 'z')
        {
            allAlpa[str[i] - 97]++;
        }
    }
    for (j = 0; j < 26; j++)
    {
       if (allAlpa[j+1]>allAlpa[j])
       {
        index = j+1;
       }else if (alpa[j]>alpa[j+1])
       {
        index = j;
       }       
    }
    printf("%d\n",i);
    printf("%c occurs highest \n", alpa[index]);
}
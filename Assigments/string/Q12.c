#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);
    printf("in reverse with function :%s\n" , strrev(str));
    int i=0 , len = strlen(str);
    char temp;
    while ( i< len-i-1)
    {
        temp=str[i];
        str[i]=str[len-1-i];
        str[len-i-1]=temp;
        i++;
    }
    printf("in reverse without function :%s\n" , str);
}
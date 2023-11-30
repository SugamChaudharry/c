#include <stdio.h>
#include <string.h>
int reverse(char str[])
{
    int i = 0, len = strlen(str);
    char temp;
    while (i < len - i - 1)
    {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
        i++;
    }
    printf("in reverse without function :%s\n", str);
}
int main(){
    char str[100];
    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);
    reverse(str);   
}
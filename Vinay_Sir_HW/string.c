#include<stdio.h>
int main(){
    // char str[100];
    // char str[100] = "Hello\0 World";
    char str[100] = {'H', 'e', 'l', 'l', 'o', 'W', 'o', 'r', 'l', 'd'};
    // printf("Enter a string: ");
    // scanf("%[^\n]s", str);
    // gets(str);
    // fgets(str, sizeof(str), stdin);
    // printf("The string is: %s", str);
    // puts(str);
    fputs(str , stdout);
    return 0;
}
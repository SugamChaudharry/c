#include <stdio.h>

int leapYear(int year)
{
    if ((year%4==0 && year%100!=0) || (year%400==0))
    {
        printf("%d is a leap year",year);
    }
    else
    {
        printf("%d is not a leap year",year);
    }
    
}
int main(){
    int year;
    printf("Enter the year: ");
    scanf("%d",&year);
    leapYear(year);
    return 0;
}
#include <stdio.h>
    int main() {
        int weekDayNumber;
        printf("Enter a number between 1 and 7: ");
        scanf("%d",&weekDayNumber);

        switch (weekDayNumber)
        {
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednuesday");
            break;
        case 4:
            printf("thursday");
            break;
        case 5:
            printf("friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("sunday");
            break;
        default: printf("invalid day no");
            break;
        }
    }
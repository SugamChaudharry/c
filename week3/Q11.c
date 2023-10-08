#include <stdio.h>

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);

    while (number >= 10) {
        number = sumOfDigits(number);
    }

    printf("The single-digit sum is: %d\n", number);

    return 0;
}

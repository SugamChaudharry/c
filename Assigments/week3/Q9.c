#include <stdio.h>

int main() {
    int count = 0;
    double num, sum = 0;

    while (1) {
        printf("Enter a number (negative to exit): ");
        scanf("%lf", &num);

        if (num < 0) {
            break;
        }

        sum += num;
        count++;
    }

    if (count > 0) {
        double average = sum / count;
        printf("Sum of positive numbers: %.2lf\n", sum);
        printf("Average of positive numbers: %.2lf\n", average);
    } else {
        printf("No positive numbers entered.\n");
    }

    return 0;
}

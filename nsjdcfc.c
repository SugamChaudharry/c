#include <stdio.h>
#include<conio.h>
#include<stdlib.h>

int main() {
  	system("cls");
    float num1, num2, result;
    char op;

    printf("Enter num1: ");
    scanf("%f", &num1);
    printf("Enter num2: ");
    scanf("%f", &num2);
    printf("Enter your operator: ");
    scanf(" %c", &op);

    if (op == '+') {
        result = num1 + num2;
        printf("Sum is: %.2f", result);
    } else if (op == '-') {
        result = num1 - num2;
        printf("Difference is: %.2f", result);
    } else if (op == '*') {
        result = num1 * num2;
        printf("Product is: %.2f", result);
    } else if (op == '/') {
        if (num2 != 0) {
            result = num1 / num2;
            printf("Quotient is: %.2f", result);
        } else {
            printf("Division by zero is not allowed");
        }
    } else {
        printf("Invalid Operator");
    }

    return 0;
}

// #include <stdio.h>
// #include<conio.h>
// #include<stdlib.h>

// int main() {
//   	system("cls");
//     float num1, num2, result;
//     char op;

//     printf("Enter num1: ");
//     scanf("%f", &num1);
//     printf("Enter num2: ");
//     scanf("%f", &num2);
//     printf("Enter your operator: ");
//     scanf(" %c", &op);

//     if (op == '+') {
//         result = num1 + num2;
//         printf("Sum is: %.2f", result);
//     } else if (op == '-') {
//         result = num1 - num2;
//         printf("Difference is: %.2f", result);
//     } else if (op == '*') {
//         result = num1 * num2;
//         printf("Product is: %.2f", result);
//     } else if (op == '/') {
//         if (num2 != 0) {
//             result = num1 / num2;
//             printf("Quotient is: %.2f", result);
//         } else {
//             printf("Division by zero is not allowed");
//         }
//     } else {
//         printf("Invalid Operator");
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{
    int num = 5;
    int *ptr1 = &num;
    int **ptr2 = &ptr1;

    printf("Value of num: %d\n", num);
    printf("Value of ptr1: %p\n", (void *)ptr1);
    printf("Value of ptr2: %p\n", (void *)ptr2);
    printf("Value pointed to by ptr1: %d\n", *ptr1);
    printf("Value pointed to by ptr2 (dereferencing twice): %d\n", **ptr2);

    return 0;
}

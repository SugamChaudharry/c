#include <stdio.h>
#include <math.h>

int main() {
    char choice;
    double area;

    printf("Choose a shape (r=rectangle, c=circle, t=triangle): ");
    scanf(" %c", &choice);

    switch (choice) {
        case 'r':
        case 'R': {
            double length, width;
            printf("Enter length and width of the rectangle: ");
            scanf("%lf %lf", &length, &width);
            area = length * width;
            printf("Area of the rectangle: %.2lf\n", area);
            break;
        }
        case 'c':
        case 'C': {
            double radius;
            printf("Enter the radius of the circle: ");
            scanf("%lf", &radius);
            area = 3.14159265 * radius * radius;
            printf("Area of the circle: %.2lf\n", area);
            break;
        }
        case 't':
        case 'T': {
            double base, height;
            printf("Enter base and height of the triangle: ");
            scanf("%lf %lf", &base, &height);
            area = 0.5 * base * height;
            printf("Area of the triangle: %.2lf\n", area);
            break;
        }
        default:
            printf("Invalid choice\n");
    }

    return 0;
}

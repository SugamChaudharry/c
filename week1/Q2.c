#include <stdio.h>
#include <math.h>

int main() {
    float radius, area;
    const float pi = 3.14159265;
    
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    
    area = pi * pow(radius, 2);
    
    printf("The area of the circle is: %f\n", area);
    
    return 0;
}

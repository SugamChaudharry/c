#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, compoundInterest;
    
    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    
    printf("Enter the rate of interest (in percentage): ");
    scanf("%f", &rate);
    
    printf("Enter the time (in years): ");
    scanf("%f", &time);
    
    rate = rate / 100; // Convert rate to decimal
    
    compoundInterest = principal * (pow(1 + rate, time) - 1);
    
    printf("The compound interest is: %f\n", compoundInterest);
    
    return 0;
}

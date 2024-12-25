#include <stdio.h>
#include <math.h> // Include the math library

int main() {
    double base, exponent, result;
    double number, squareRoot;

    // Input for power calculation
    printf("Enter the base: ");
    scanf("%lf", &base);

    printf("Enter the exponent: ");
    scanf("%lf", &exponent);

    // Calculate power
    result = pow(base, exponent);
    printf("%.2lf raised to the power %.2lf is %.2lf\n", base, exponent, result);

    // Input for square root calculation
    printf("Enter a number to find its square root: ");
    scanf("%lf", &number);

    // Calculate square root
    if (number >= 0) {
        squareRoot = sqrt(number);
        printf("The square root of %.2lf is %.2lf\n", number, squareRoot);
    } else {
        printf("Square root of a negative number is undefined in real numbers.\n");
    }

    return 0;
}
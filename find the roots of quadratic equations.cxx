#include <stdio.h>
#include <math.h> // For sqrt() function

int main() {
    double a, b, c, discriminant, root1, root2, realPart, imagPart;

    // Input coefficients a, b, and c
    printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Check if it's a quadratic equation
    if (a == 0) {
        printf("This is not a quadratic equation.\n");
        return 0;
    }

    // Calculate the discriminant
    discriminant = b * b - 4 * a * c;

    // Check the nature of the roots
    if (discriminant > 0) {
        // Two distinct real roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("The roots are real and distinct:\n");
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
    } else if (discriminant == 0) {
        // One real root (repeated)
        root1 = root2 = -b / (2 * a);
        printf("The roots are real and equal:\n");
        printf("Root = %.2lf\n", root1);
    } else {
        // Complex roots
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("The roots are complex and imaginary:\n");
        printf("Root 1 = %.2lf + %.2lfi\n", realPart, imagPart);
        printf("Root 2 = %.2lf - %.2lfi\n", realPart, imagPart);
    }

    return 0;
}
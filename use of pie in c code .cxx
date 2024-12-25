#include <stdio.h>

#define PI 3.14159 // Defining PI as a constant

int main() {
    double radius, area;

    // Input radius of a circle
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    // Calculate the area of the circle
    area = PI * radius * radius;

    // Print the area
    printf("The area of the circle is: %.2lf\n", area);

    return 0;
}
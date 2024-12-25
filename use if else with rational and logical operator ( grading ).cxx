#include <stdio.h>

int main() {
    int marks;

    // Input marks
    printf("Enter marks (0 to 100): ");
    scanf("%d", &marks);

    // Check the grade using if-else and logical operators
    if (marks >= 90 && marks <= 100) {
        printf("Grade A\n");
    } else if (marks >= 75 && marks < 90) {
        printf("Grade B\n");
    } else if (marks >= 50 && marks < 75) {
        printf("Grade C\n");
    } else if (marks >= 35 && marks < 50) {
        printf("Grade D\n");
    } else if (marks >= 0 && marks < 35) {
        printf("Grade F (Fail)\n");
    } else {
        printf("Invalid marks. Please enter marks between 0 and 100.\n");
    }

    return 0;
}
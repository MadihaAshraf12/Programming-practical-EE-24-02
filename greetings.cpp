#include <stdio.h>
int main() {
    int choice;
    printf("Enter 1 or 2 or 3 : ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("Salaam\n");
            break;
        case 2:
            printf("Aadaab\n");
            break;
        case 3:
            printf("Hello\n");
            break;
        default:
            printf("Incorrect Option\n");
    }
    return 0;
}

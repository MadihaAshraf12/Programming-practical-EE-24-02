#include <stdio.h>

int main() {
    int N;

    // Input the value of N
    printf("Enter the value of N: ");
    scanf("%d", &N);

    // Display the series with dashes
    for (int i = 1; i <= N; i++) {
        printf("%d", i);
        
        // Print a dash after each number except the last one
        if (i < N) {
            printf(" - ");
        }
    }

    printf("\n");  // New line after the series
    return 0;
}
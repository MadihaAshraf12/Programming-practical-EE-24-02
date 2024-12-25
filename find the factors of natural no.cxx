#include <stdio.h>

int main() {
    int N;

   
    printf("Enter a natural number: ");
    scanf("%d", &N);

    
    if (N <= 0) {
        printf("Please enter a positive natural number.\n");
    } else {
        printf("Factors of %d are: ", N);

       
        for (int i = 1; i <= N; i++) {
            if (N % i == 0) {
                printf("%d ", i); 
            }
        }

        printf("\n");
    }

    return 0;
}
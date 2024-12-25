#include <stdio.h>
#include <math.h>  // For sqrt() function

int main() {
    int N;

   
    printf("Enter a number: ");
    scanf("%d", &N);


    if (N <= 1) {
        printf("%d is not a prime number.\n", N);
    } else {
        int isPrime = 1;  

     
        for (int i = 2; i <= sqrt(N); i++) {
            if (N % i == 0) {
                isPrime = 0;  
                break;  
            }
        }

       
        if (isPrime) {
            printf("%d is a prime number.\n", N);
        } else {
            printf("%d is not a prime number.\n", N);
        }
    }

    return 0;
}
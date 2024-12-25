#include <stdio.h>

int main() {
    int N;
    long long product = 1;  

   
    printf("Enter the value of N: ");
    scanf("%d", &N);

    // Calculate the product using a loop
    for (int i = 1; i <= N; i++) {
        product *= i;  
    }

    
    printf("Product of the series 1, 2, 3, ..., %d is: %lld\n", N, product);

    return 0;
}
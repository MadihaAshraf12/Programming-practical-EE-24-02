#include <stdio.h>

int main() {
    int N;
    int sum = 0;

   
    printf("Enter the value of N: ");
    scanf("%d", &N);

    
    for (int i = 1; i <= N; i++) {
        sum += i;  
    }

  
    printf("Sum of the series 1, 2, 3, ..., %d is: %d\n", N, sum);

    return 0;
}
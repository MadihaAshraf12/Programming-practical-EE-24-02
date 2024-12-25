#include <stdio.h>

int main() {
    int N;
    long long term = 204;  

  
    printf("Enter the number of terms in the series: ");
    scanf("%d", &N);

    printf("The series is: ");

   
    for (int i = 1; i <= N; i++) {
        printf("%lld ", term);

        
        if (i % 2 != 0) {
            term /= 13;  
        } else {
            term *= 16;
        }
    }

    printf("\n");  

    return 0;
}
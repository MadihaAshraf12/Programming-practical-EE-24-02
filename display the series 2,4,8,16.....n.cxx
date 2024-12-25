#include <stdio.h>

int main() {
    int N;

    
    printf("Enter the number of terms in the series: ");
    scanf("%d", &N);

   
    int term = 2;

    printf("The series is: ");

  
    for (int i = 1; i <= N; i++) {
        printf("%d ", term);
        term *= 2;
    }

    printf("\n");

    return 0;
}
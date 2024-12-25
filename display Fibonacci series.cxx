#include <stdio.h>

int main() {
    int N;
    

    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &N);
    
 
    long long first = 0, second = 1, nextTerm;

   
    printf("The Fibonacci series is: ");
    

    if (N >= 1) {
        printf("%lld ", first);
    }
    
 
    if (N >= 2) {
        printf("%lld ", second);
    }

  
    for (int i = 3; i <= N; i++) {
        nextTerm = first + second; 
        printf("%lld ", nextTerm);

      
        first = second;
        second = nextTerm;
    }

    printf("\n");  

    return 0;
}
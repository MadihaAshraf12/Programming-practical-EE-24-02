#include <stdio.h>

int main() {
    int n;

    
    printf("Enter the value of n: ");
    scanf("%d", &n);

    
    for (int i = n; i >= 1; i--) {
        printf("%d ", i);
    }

    
    for (int i = 2; i <= n; i++) {
        printf("%d ", i);
    }

    printf("\n"); 
    return 0;
}
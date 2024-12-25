#include <stdio.h>

int main() {
    int num;

 
    printf("Enter a natural number: ");
    scanf("%d", &num);

    printf("The digits in reverse order are: ");

    
    if (num == 0) {
        printf("0");
    } else {
        
        while (num > 0) {
            printf("%d", num % 10);
            num = num / 10;           
        }
    }

    printf("\n"); 

    return 0;
}
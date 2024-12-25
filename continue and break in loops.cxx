#include <stdio.h>

int main() {
    int i;
    
    printf("Using continue and break in a loop:\n");
    
  
    for (i = 1; i <= 10; i++) {
       
        if (i == 5) {
            continue;
        }
        
        
        if (i == 8) {
            break; 
        }
        
        printf("%d ", i);  
    }
    
    printf("\nLoop finished.\n");

    return 0;
}
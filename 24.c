\\ Prime number

#include <stdio.h>

int main() {
    int i, j, a, b;
    
    printf("Please Enter the value: ");
    scanf("%d", &i);
    
    for (j = 2; j < 10; j++) {
        if (i == j) {
            b = 1;
        } 
        else {
            if (i % j == 0) {
                a = 1;
                break;
            } 
            else {
                a = 0;
            }
        }
    }
    
    if (a == 1) {
        printf("\nThe number is not a prime number");
    } else {
        printf("\nThe number is a prime number");
    }

    return 0;
}

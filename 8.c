// Divisibility by 6

#include <stdio.h>

int main() {
    int number;
    
    // Input the number from the user
    printf("Enter a number: ");
    scanf("%d", &number);
    
    // Check if the number is divisible by 6
    if (number % 6 == 0) {
        printf("%d is divisible by 6.\n", number);
    } else {
        printf("%d is not divisible by 6.\n", number);
    }
    
    return 0;
}

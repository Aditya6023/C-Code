// Conditional Statements 

#include <stdio.h>

int main() {
    int number;

    // Input the number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is greater than 50
    if (number > 50) {
        printf("%d is greater than 50.\n", number);
    } 
    
    else if (number == 50) {
        printf("%d is the original number.\n", number);
    }
    
    else {
        printf("%d is not greater than 50.\n", number);
    }

    return 0;
}

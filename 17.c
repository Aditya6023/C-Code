// Subtraction

#include <stdio.h>

int main() {
    int num1, num2, Difference;

    // Ask the user to input two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Perform Subtraction
    Difference = num1 - num2;

    // Print the result
    printf("The sum of %d and %d is %d.\n", num1, num2, Difference);

    return 0;
}

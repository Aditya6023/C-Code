// Swaping without 3rd varialble

#include <stdio.h>

int main() {
    int num1, num2;

    // Ask the user to input two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Display the numbers before swapping
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    // Swap the numbers without using a third variable
    num1 = num1 + num2; // Store sum in num1
    num2 = num1 - num2; // Subtract num2 from sum and store result in num2 (which is now the original num1)
    num1 = num1 - num2; // Subtract num2 (original num1) from sum and store result in num1

    // Display the numbers after swapping
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}

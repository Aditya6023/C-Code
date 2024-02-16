// Division

#include <stdio.h>

int main() {
    double num1, num2, result;

    // Ask the user to input two numbers
    printf("Enter the first number: ");
    scanf("%lf", &num1);
    
    printf("Enter the second number: ");
    scanf("%lf", &num2);

    // Check if the second number is zero
    if (num2 == 0) {
        printf("Error: Division by zero is not allowed.\n");
    } else {
        // Perform division
        result = num1 / num2;
        
        // Print the result
        printf("The result of %.2lf divided by %.2lf is %.2lf.\n", num1, num2, result);
    }

    return 0;
}

// Swaping 

#include <stdio.h>

int main() {
    int num1, num2, temp;

    // Ask the user to input two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Display the numbers before swapping
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    // Swapping using a third variable
    temp = num1;
    num1 = num2;
    num2 = temp;

    // Display the numbers after swapping
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}

// Arthmatic Operations 

#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Sum: %d\n", num1 + num2);
    printf("Difference: %d\n", num1 - num2);
    printf("Product: %d\n", num1 * num2);

    if (num2 != 0) {
        printf("Quotient: %d\n", num1 / num2);
        printf("Remainder: %d\n", num1 % num2);
    } else {
        printf("Cannot divide by zero.\n");
    }

    return 0;
}

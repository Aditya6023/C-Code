// Modular

#include <stdio.h>

int main() {
    int dividend, divisor, remainder;

    // Ask the user to input the dividend
    printf("Enter the dividend: ");
    scanf("%d", &dividend);

    // Ask the user to input the divisor
    printf("Enter the divisor: ");
    scanf("%d", &divisor);

    // Compute the remainder using the modulus operator
    remainder = dividend % divisor;

    // Print the remainder
    printf("The remainder of %d divided by %d is %d.\n", dividend, divisor, remainder);

    return 0;
}

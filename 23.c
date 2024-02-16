// Max Number

#include <stdio.h>

int main() {
    int a, b;

    // Ask the user to input two numbers
    printf("Enter the first number (a): ");
    scanf("%d", &a);
    
    printf("Enter the second number (b): ");
    scanf("%d", &b);

    // Check which number is greater
    if (a > b) {
        printf("Maximum number is: %d\n", a);
    } else {
        printf("Maximum number is: %d\n", b);
    }

    return 0;
}

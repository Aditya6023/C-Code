// Relational Operations

#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("%d > %d is %s\n", num1, num2, num1 > num2 ? "true" : "false");
    printf("%d < %d is %s\n", num1, num2, num1 > num2 ? "true" : "false");
    printf("%d >= %d is %s\n", num1, num2, num1 >= num2 ? "true" : "false");
    printf("%d <= %d is %s\n", num1, num2, num1 <= num2 ? "true" : "false");
    printf("%d == %d is %s\n", num1, num2, num1 == num2 ? "true" : "false");
    printf("%d != %d is %s\n", num1, num2, num1 != num2 ? "true" : "false");

    return 0;
}

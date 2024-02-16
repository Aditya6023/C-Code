// Conditional Statement

#include <stdio.h>

int main() {
    char *months[] = {"January", "February", "March", "April", "May", "June",
                      "July", "August", "September", "October", "November", "December"};
    int numMonths;

    printf("Enter the number of months you want to print: ");
    scanf("%d", &numMonths);

    if (numMonths < 1 || numMonths > 12) {
        printf("Invalid input. Please enter a number between 1 and 12.\n");
        return 1; // Exit with error code
    }

    else {
    printf("Months:\n");
    for (int i = 0; i < numMonths; i++) {
        printf("%d. %s\n", i + 1, months[i]);
     }
    }
    return 0;
}

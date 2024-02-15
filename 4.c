// Database input output

#include <stdio.h>

int main() {
    char names[5][100]; // Array to store names
    char emails[5][100]; // Array to store email addresses

    // Input names and email addresses
    printf("Enter 5 names and their corresponding email addresses:\n");
    for (int i = 0; i < 5; i++) {
        printf("Name %d: ", i + 1);
        scanf("%s", names[i]);
        printf("Email Address %d: ", i + 1);
        scanf("%s", emails[i]);
    }

    // Print all names and email addresses in new rows
    printf("\nAll Names and Email Addresses:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\t%s\n", names[i], emails[i]);
    }

    return 0;
}

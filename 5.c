// Printing week days

#include <stdio.h>

int main() {
    char *weekdays[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    
    // Starting from Monday (index 0) and ending at Sunday (index 6)
    for (int i = 0; i < 7; i++) {
        printf("%s\n", weekdays[i]);
    }
    
    return 0;
}

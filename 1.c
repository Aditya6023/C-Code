
// Recursion 


#include <stdio.h>

void printTable(int num, int times) {
    if (times > 10) // recursion stops when times exceeds 10
        return;
    
    printf("%d x %d = %d\n", num, times, num * times);
    printTable(num, times + 1); // Recursive call with incremented times
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printTable(num, 1); // Start the recursion from times = 1
    
    return 0;
}

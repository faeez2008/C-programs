#include <stdio.h>

int main() {
    int i, j;
    for (i = 1; i <= 4; i++) {        // Outer loop for rows
        for (j = 1; j <= i; j++) {    // Inner loop for columns
            printf("* ");
        }
                 // New line after each row
    }
    return 0;
}

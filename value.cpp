#include <stdio.h>
int main() {
    int x = 12, y = 20, z;  // y needs an initial value
    z = ++x;               // z = 13, x = 13
    y = y - z + 3;         // y = 20 - 13 + 3 = 10 (assuming assignment)
    printf("%d", y);       // Prints 10
    return 0;
}

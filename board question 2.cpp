#include <stdio.h>

int main() {
    int count = 1, num = 2; // Start from the first even number

    while (count <= 50) {
        printf("%d ", num);
        num += 2; // Move to the next even number
        count++;
    }

    printf("\n");
    return 0;
}


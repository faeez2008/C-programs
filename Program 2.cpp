#include <stdio.h>

int main() {
    int n, i = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (i <= n) {
        if (i % 2 == 0)
            printf("%d\n", i);  // Added newline for better readability

        i++;
    }

    return 0;
}


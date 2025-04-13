#include <stdio.h>

int main() {
    int num, reversed, digit1, digit2;
    
    // Prompt user for input
    printf("Enter a 2-digit number: ");
    scanf("%d", &num);
    
    // Check if it's a 2-digit number
    if (num >= 10 && num <= 99) {
        // Extract digits
        digit1 = num / 10;  // Tens place
        digit2 = num % 10;  // Units place
        
        // Form reversed number
        reversed = digit2 * 10 + digit1;
        
        // Print result
        printf("Number in reverse order: %d\n", reversed);
    } else {
        printf("Error: Please enter a valid 2-digit number (10-99).\n");
    }
    
    return 0;
}

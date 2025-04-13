#include <stdio.h>
#include <conio.h>

int main() {
    char ch1, ch2;
    
    printf("Press a key for getch(): ");
    ch1 = getch();  // No echo
    printf("\nYou pressed: %c\n", ch1);
    
    printf("Press a key for getche(): ");
    ch2 = getche(); // Echoes the character
    printf("\nYou pressed: %c\n", ch2);
    
    return 0;
}

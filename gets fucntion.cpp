#include <stdio.h>

int main() 
{
    char str[50];
    printf("Enter a string: ");
    gets(str);  // Reads input string
    printf("You entered: %s\n", str);
    return 0;
}

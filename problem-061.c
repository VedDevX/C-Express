// Declare a pointer to char and use it to read and print a character entered by user.

#include <stdio.h>

int main() {
    char character;
    char *ptr = &character;
    printf("Enter the Character: ");
    scanf("%c", ptr);

    printf("The value of character is %c", *ptr);
    printf("\nThe value of character is %c", character);
    return 0;
}
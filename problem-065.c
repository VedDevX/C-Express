// Write a C program that initializes an unsigned int to its maximum possible value and an int to a negative number.
// Add 1 to both, and print the results to show how the unsigned int wraps aaround to 0, whereas the int 
// remains negative due to overflow.

#include <stdio.h>
#include <limits.h>

int main() {
    unsigned int num = UINT_MAX;
    int normal = INT_MAX;

    printf("The max value of unsigned int is: %u", num);
    printf("\nThe maximum value of normal int is: %d", normal);

    num++;
    normal++;

    printf("\nThe max value of unsigned int is: %u", num);
    printf("\nThe maximum value of normal int is: %d", normal);
    return 0;
}
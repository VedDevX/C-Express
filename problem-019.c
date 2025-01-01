// Create a program that determines if a number is positive, negative or zero.

#include <stdio.h>
int main() {
    int num1;
    printf("Enter the number: ");
    scanf("%d", &num1);

    if (num1 > 0) {
        printf("The number is positive.");
    } else if (num1 < 0) {
        printf("The number is negative");
    } else if (num1 == 0) {
        printf("The number is Zero");
    } else {
        printf("Invalid number");
    }
    return 0;
}
// Create a program to find minimum of two numbers using ternary operator

#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter the First Number: ");
    scanf("%d", &num1);

    printf("Enter the Second Number: ");
    scanf("%d", &num2);

    int min = num1 < num2 ? num1 : num2;
    printf("Minimum of two numbers is: %d", min);
    return 0;
}
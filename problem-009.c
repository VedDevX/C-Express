// Create a program to swap two numbers

# include <stdio.h>

int main() {
    int num1, num2, temp;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("You Give first number as: %d and second number as: %d\n", num1, num2);

    // Baccha method
    printf("After swapping the two numbers first number is: %d and second number is: %d", num2, num1);
    printf("\n");

    // Pro method
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("After swapping the two numbers first number is: %d and second number is: %d", num1, num2);
    return 0;
}
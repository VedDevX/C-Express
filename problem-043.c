// Create a program that prompts a user to enter a positive number Use a do while loop to keep asking for the number yntil user enter s a valid posuive number.

#include <stdio.h>

int main() {
    int num;

    do {
        printf("Enter the positive number: ");
        scanf("%d", &num);
    } while (num <= 0);

    printf("You have successfully entered a positive number.");
    
    return 0;
}
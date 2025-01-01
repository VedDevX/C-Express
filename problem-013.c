// Create a program to calculate product of two floating point numbers

#include<stdio.h>

int main() {
    float num1, num2;
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);

    printf("The product of this two floating point number is: %f", num1 * num2);
    return 0;

}
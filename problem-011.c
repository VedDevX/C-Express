// Given an integer value, convert it into floating point value and print both

#include <stdio.h>

int main() {
    int num1;
    printf("Enter the integer value: ");
    scanf("%d", &num1);

    float number = num1;
    printf("\n Original number is: %d \n Float converted is: %f", num1, number);
    return 0;
}
//  Create a program that calculates the sum of digits of an integer.

#include <stdio.h>

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    int sum = 0;
    int copy = num;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }

    printf("The sum of digits in %d is %d", copy, sum);
    return 0;
}
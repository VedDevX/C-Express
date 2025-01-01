// Develop a program that calculates the sum of all numbers entered by user until enters 0. The total sum should be then displayed.

#include <stdio.h>

int main() {
    int num;
    int sum = 0;

    do {
        printf("Enter the number: ");
        scanf("%d", &num);
        sum += num;
    } while (num != 0);

    printf("The sum of all number is: %d", sum);
    return 0;
}
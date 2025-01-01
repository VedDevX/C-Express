// Create a program using continue to sum all positive numbers entered by the user ; skip any negative numbers

#include <stdio.h>

int main() {
    int num;
    int sum = 0;

    do {
        printf("Enter the number: ");
        scanf("%d", &num);
        if (num < 0) continue;
        sum += num;
    } while (num != 0);

    printf("The sum of all positive numbers is: %d", sum);
    return 0;
}
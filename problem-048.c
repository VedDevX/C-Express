// Create a program using continue to print only even numbers using continue for odd numbers.

#include <stdio.h>

int main() {
    int num;
    printf("Enter the number till you want even numbers: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        if (i % 2 == 1) continue;
        printf("%d ", i);
    }

    return 0;
}
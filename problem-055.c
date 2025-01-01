// Demonstrate with a function that the original integer passed to it does not change after incrementing it inside the function.

#include<stdio.h>

void increment(int);

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    printf("\nBefore: Value of number is %d", num);
    increment(num);
    printf("\nAfter: Value of number is %d", num);
    return 0;
}

void increment(int a) {
    printf("\nIn function Before: Value of number is %d", a);
    a++;
    printf("\nIn function After: Value of number is %d", a);
}
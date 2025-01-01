// Write a function that takes 4 int parameters and returns sum

#include <stdio.h>

int add();

int main() {
    printf("\nThe sum of four values is: %d", add());
    return 0;
}

int add() {
    int a, b, c, d;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Enter the third number: ");
    scanf("%d", &c);
    printf("Enter the fourth number: ");
    scanf("%d", &d);
    int sum = a + b + c + d;
    return sum;
}
// Write a program that calculates factorial of a given number

#include<stdio.h>

int main() {
    int num, fact = 1;
    printf("Enter the number to find th factorial: ");
    scanf("%d", &num);

    for (int i = 2; i <= num; i++) {
        fact = fact * i;
    }
    printf("The Factorial of %d is %d", num, fact);
    return 0;
}
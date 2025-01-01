// Write a program to demonstrate the difff in range between long and long long by calculating the factorial o 20.

#include <stdio.h>

long long factorial(int);

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    long long result = factorial(num);
    printf("Factorial of %d is %lld", num, result);
    return 0;
}

long long factorial(int num){
    if (num <= 1) {
        return 1;
    }
    return num * factorial(num - 1);
}
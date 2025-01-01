// Write a program to change the value of an integer variable using pointer and the * operator

#include <stdio.h>

int main() {
    int num = 5;
    int *ptr = &num;

    *ptr = 87;
    printf("The value of number is %d", num);
    return 0;
}
// Create a program that declares one variable of each of the fundamental data types(int, float, double, char) and prints their size using sizeof() operator.

#include<stdio.h>

int main() {
    int num1;
    float num2;
    double num3;
    char name[10];

    printf("Please enter the integer: ");
    scanf("%d", &num1);

    printf("please enter the float: ");
    scanf("%f", &num2);

    printf("Please enter the double: ");
    scanf("%lf", &num3);

    printf("Please enter the characters: ");
    scanf("%s", name);

    printf("the size of integer is %d bytes", sizeof(num1));
    printf("the size of float is %d bytes", sizeof(num2));
    printf("the size of double is %d bytes", sizeof(num3));
    printf("the size of charcacter is %d bytes", sizeof(name));
}
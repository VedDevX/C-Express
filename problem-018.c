// Create a program to convert faherenhite to Celsius

#include<stdio.h>

int main() {
    float Fah, Cel;
    printf("Enter the temperature in Fahrenhite: ");
    scanf("%f", &Fah);

    Cel = (Fah - 32) * 5/9;
    printf("The temperature in celsius is: %.2f", Cel);
    return 0;
}
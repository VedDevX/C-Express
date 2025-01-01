// Create a program to calculate compound interest

#include <stdio.h>

int main() {
    float P, R, T;
    printf("Enter the value of Principal: ");
    scanf("%f", &P);

    printf("Enter the value of Time: ");
    scanf("%f", &T);

    printf("Enter the value of Rate: ");
    scanf("%f", &R);

    float CI = P * pow((1 + R/100), T);
    printf("The compound interest is: %f", CI);
    return 0;
}
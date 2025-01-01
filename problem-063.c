// Create a program that converts large number of km to miles, using long long to store distance

#include<stdio.h>

int main() {
    const float MILE_PER_KM = 0.621371;
    long km;
    printf("Enter the Km: ");
    scanf("%ld", &km);

    long miles = km * MILE_PER_KM;
    printf("The number of miles are %ld", miles);
    return 0;
}
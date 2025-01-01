// Create a program that determines if a year is leap year or not

#include <stdio.h>

int main() {
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);

    // baccha method
    if (year % 400 == 0) {
        printf("%d is the leap year.", year);
    } else if (year % 100 == 0) {
        printf("%d is not a leap year.", year);
    } else if (year % 4 == 0) {
        printf("%d is the leap year.", year);
    } else {
        printf("%d is not a leap year.", year);
    }

    // Legend method
    if (year % 400 == 0 || (year % 4 == 00 && year % 100 != 0)) {
        printf("%d is a leap year.", year);
    } else {
        printf("%d is not a leap year.", year);
    }
    return 0;
}
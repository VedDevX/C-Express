// Create a program to calculate the perimeter of rectangle

#include <stdio.h>

int main() {
    int side1, side2, side3, side4;
    printf("Enter the first side: ");
    scanf("%d", &side1);

    printf("Enter the Second side: ");
    scanf("%d", &side2);

    printf("Enter the third side: ");
    scanf("%d", &side3);

    printf("Enter the fourth side: ");
    scanf("%d", &side4);

    printf("The Perimeter of the rectangle is: %d", side1 + side2 + side3 + side4);
    return 0;
}
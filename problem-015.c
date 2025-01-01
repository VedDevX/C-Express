// Create a program to calculate the area of triangle.

#include<stdio.h>

int main() {
    int breadth, height;
    printf("Enter the Breadth of the traingle: ");
    scanf("%d", &breadth);
    printf("Enter the height of the traingle: ");
    scanf("%d", &height);
    float area = 0.5 * breadth * height;
    printf("The area of the traingle is: %f sq cm.", area);
    return 0;
}
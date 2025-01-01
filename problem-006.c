// Create a program to find area of square

#include<stdio.h>

int main() {
    int side_length, area;
    printf("Please enter the side length of square: ");
    scanf("%d", &side_length);
    area = side_length * side_length;
    printf("The area of the sqaure is: %d.", area);
    return 0;
}
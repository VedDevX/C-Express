// Create a program using for loop multiplication table for a number

#include<stdio.h>

int main() {
    int num;
    printf("Enter the number you want the table: ");
    scanf("%d", &num);

    for (int i = 1; i <= 10; i++) {
        printf("\n%d x %d = %d", num, i, num * i);
    }
    return 0;
}
//Write a program that continuosly reads integres from the user and prints their squares. Use infinite loop and a breakk statement to exit when a special number is entered. eg. (-1)

#include <stdio.h>

int main() {
    int num;
    while (1) {
        printf("Enter the number: ");
        scanf("%d", &num);
        if (num == -1) break;
        printf("The square of %d is %d\n", num, num * num);
    }

    return 0;
}
// To check if the number is palindrome or not

#include<stdio.h>

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    int reverse = 0;
    int copy = num;
    while (copy > 0) {
        reverse = reverse * 10 + (copy % 10);
        copy /= 10;
    }

    if (reverse == num) {
        printf("The %d is a palindrome number", num);
    } else {
        printf("The %d is not a palindrome number", num);
    }
    return 0;
}
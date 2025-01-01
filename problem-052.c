// Define a function sqauare that takes an int and returns its square.

#include <stdio.h>

int square(int);

int main(){
    int num;
    printf("Enter the number to find its square: ");
    scanf("%d", &num);
    printf("\nThe square of %d is %d", num, square(num));
    return 0;
}

int square(int num) {
    return num * num;
}
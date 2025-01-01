// Create a program using recursion to display the fibonacci series upto a certain number

#include <stdio.h>

int fibonacci(int pos);

int main() {
    int num;
    printf("Enter the number till you want fibonacci series: ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        printf(" %d", fibonacci(i));
    }
    return 0;
}

int fibonacci(int pos) {
    if (pos <= 1) {
        return pos;
    }
    int current =  fibonacci(pos - 1) + fibonacci(pos - 2);
    return current;
}
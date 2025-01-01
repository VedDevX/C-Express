// Create a program that prints sum of all odd numbers from 1 to N

#include <stdio.h>

int main() {
    int num,sum;
    printf("Enter the number till you want the sum of odd numbers: ");
    scanf("%d", &num);

    for (int i=1; i <= num; i+=2) {
        sum += i;
    }
    printf("The sum of all odd numbers till %d is %d", num, sum);
    return 0;
}
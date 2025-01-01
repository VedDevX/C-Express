// Call a fuctio get_average that takes five int numbers and returns the average.

#include <stdio.h>

float get_average(int, int, int, int, int);

int main() {
    int a, b, c, d, e;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Enter the third number: ");
    scanf("%d", &c);
    printf("Enter the fourth number: ");
    scanf("%d", &d);
    printf("Enter the fifth number: ");
    scanf("%d", &e);

    float average = get_average(a,b,c,d,e);
    printf("The average is %.2f", average);
    return 0;
}

float get_average(int a, int b, int c, int d, int e) {
    float sum = a + b + c + d + e;
    return sum / 5;
}
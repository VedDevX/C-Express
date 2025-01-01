// Create a program to calculate simple interest

#include <stdio.h>

int main() {
    float p, t, r;
    printf("Enter the value of P: ");
    scanf("%f", &p);

    printf("Enter the value of T: ");
    scanf("%f", &t);

    printf("Enter the value of R: ");
    scanf("%f", &r);

    float SI = (p * t *r)/100;
    printf("The simple interest is: %f", SI);
    return 0;
}
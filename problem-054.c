// Create a function max that takes two float argumnets and return the larger value.

#include <stdio.h>

float max(float, float);

int main(){
    float a, b;
    printf("Enter the First number: ");
    scanf("%f", &a);
    printf("Enter the Second number: ");
    scanf("%f", &b);

    printf("The larger number is: %.2f", max(a,b));
    return 0;
}

float max(float first, float second) {
    return first > second ? first : second;
}
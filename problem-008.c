// To find the area of circle

#include<stdio.h>

int main() {
    const float PI = 3.14159;
    float radius;
    printf("Enter the radius of circle: ");
    scanf("%f", &radius);
    printf("The Area of the circle is: %f sq cm.", PI * radius * radius);
    return 0;
}
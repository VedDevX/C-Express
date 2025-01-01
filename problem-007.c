// Find the circuference of the circle

#include <stdio.h>

int main() {
    const float PI = 3.14159;
    double radius, circumference;
    printf("Enter the radius of circle: ");
    scanf("%lf", &radius);
    circumference = 2 * PI * radius;
    printf("The circumference of the circle is: %lf cm.", circumference);
    return 0;
}
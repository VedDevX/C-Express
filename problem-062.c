// Implement a void minmax(int *a, int*b, int*min, int*max) function that takes two integers
// two integer pointers a and b as input and assigns the smaller value to min and the larger value to max using call by reference.
// Write a main function to test it with different values

#include <stdio.h>

void minmax(int *, int *, int *, int *);

int main() {
    int first, second, minimum, maximum;
    printf("Enter the first value: ");
    scanf("%d", &first);
    printf("Enter the second value: ");
    scanf("%d", &second);

    minmax(&first, &second, &minimum, &maximum);
    printf("Between %d and %d, Minimum is %d and Maximum is %d", first, second, minimum, maximum);
    return 0;
}

void minmax(int *a, int *b, int *min, int *max) {
    if (*a < *b) {
        *min = *a;
        *max = *b;
    } else {
        *min = *b;
        *max = *a;
    }
}
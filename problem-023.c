// Create a program that calculates grades based on marks

#include <stdio.h>

int main() {
    int percentage;
    printf("Enter the Percentage: %% ");
    scanf("%d", &percentage);

    if (percentage > 90) {
        printf("Your Grade is A");
    } else if (percentage < 90 && percentage > 75) {
        printf("Your Grade is B");
    } else if (percentage < 75 && percentage > 60) {
        printf("your Grade is C");
    } else if (percentage < 60 && percentage > 30) {
        printf("Your Grade is D");
    } else {
        printf("Your Grade is F");
    }
    return 0;
}
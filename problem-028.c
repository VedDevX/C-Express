// Create a program based on students score, categorize as High, Moderate, Low using ternary operator

#include<stdio.h>

int main() {
    int score;
    printf("Enter the Score: ");
    scanf("%d", &score);

    (score >= 80) ? printf("Your score is High.") : (score < 80 && score >= 50) ? printf("Your score is Moderate.") : printf("Your Score is Low");
    return 0;
}
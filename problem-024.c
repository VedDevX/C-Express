// create a program that categorize persons into diff age groups

#include<stdio.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 60) {
        printf("You are senior");
    } else if (age < 60 && age >= 20) {
        printf("You are adult");
    } else if (age < 20 && age >= 13) {
        printf("You are Teen");
    } else if (age < 13 && age >= 0) {
        printf("You are child");
    } else {
        printf("Invalid age!");
    }
    return 0;
}
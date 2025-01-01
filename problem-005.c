// Define variables for storing a user's first name, last name, and age using appropriate naming conventions and then display them.

#include<stdio.h>

int main() {
    char first_name[20];
    char last_name[20];
    int age;

    printf("Enter the first name: ");
    scanf("%s", first_name);

    printf("Enter the last name: ");
    scanf("%s", last_name);

    printf("Enter the age: ");
    scanf("%d", &age);

    printf("Hello Mr. %s %s, You are %d years old.", first_name, last_name, age);
    return 0;
}
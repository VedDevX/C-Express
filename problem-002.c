//Create a program to input name of the person and respond with "Welcome NAME to C Programming"

#include <stdio.h>

int main() {
    char name[20];
    printf("Please Enter the name: ");
    scanf("%19s", name);
    printf("Welcome %s to C Programming.", name);
    return 0;
}
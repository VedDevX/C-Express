// Develop a program that prints multiplication table of a given number.

#include<stdio.h>

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    int i=1;
    while(i <=10) {
        printf("%d x %d = %d \n",num, i, num * i);
        i++;
    }
    return 0;
}
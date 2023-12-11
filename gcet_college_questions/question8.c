//Write a program that find wheater given number is even or odd.

#include <stdio.h> 
int main () {
    int number;
    printf("Enter the number");
    scanf("%d", &number);

    if(number%2 == 0) {
        printf("the given number is even %d\n", number);
    } else {
        printf("the given number is odd %d\n", number);

    } return 0;
}
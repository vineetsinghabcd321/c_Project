// Write a program that check wheater two numbers entered by the user are equal or not.

#include <stdio.h> 
int main() {
    int num1, num2;

    printf("Enter the first number:");
    scanf("%d", &num1);

    printf("Enter the second number:");
    scanf("%d", &num2);

    // check the condition
    if(num1 == num2) {
        printf("the temperature are equal %d and %d", num1, num2);
    } else {
        printf("the temperature are not equal %d and %d", num1, num2);
    } return 0;
}
// write a  program to find reverse of a program.
#include <stdio.h>
int main() {
    int num1, num2, remainder;
    printf("Enter the number");
    scanf("%d", &num1);

    while(num1>0) {
        remainder = num1 %10;
        num2 = num2*10 + remainder;
        num1 /= 10;
    } 
    printf("reverse of a number is %d \n", num2);
    return 0;
}


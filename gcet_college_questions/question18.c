// WAP to find a reverse of a number.
#include <stdio.h>
int main() {
    int num1, num2 = 0, remainder;
    printf("Enter the number: ");
    scanf("%d", &num1);

    while (num1 > 0) {
        remainder = num1 % 10;
        num2 = num2 * 10 + remainder;
        num1 /= 10;
    }

    printf("Reversed number is %d\n", num2);

    return 0;
}








#include <stdio.h>

int main() {
    int a, b, c;
    char ch;

    printf("Enter the two operands a and b: ");
    scanf("%d %d", &a, &b);

    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &ch);

    switch (ch) {
        case '+':
            c = a + b;
            break;
        case '-':
            c = a - b;
            break;
        case '*':
            c = a * b;
            break;
        case '/':
            if (b != 0) {
                c = a / b;
            } else {
                printf("Error: Division by zero\n");
                return 1;
            }
            break;
        default:
            printf("Error: Invalid operator\n");
            return 1;
    }

    printf("Result: %d\n", c);
    return 0;
}
// write a program to swaps two numbers by using third numbers and numbers are taken by user.
#include <stdio.h>
int main() {
    int a,b,c;
    printf("Enter the value of a");
    scanf("%d", &a);

    printf("Enter the value of b");
    scanf("%d", &b);

    c = a;
    a = b;
    b = c;

    printf("after swapping the value is a= %d and b = %d \n", a,b);
    return 0;
}
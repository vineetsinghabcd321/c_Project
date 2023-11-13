// write a program to find out area of rectangle if length and breadth if given by user.
#include <stdio.h>

int main() {
    int length , breadth;
    printf("Enter the length of rectangle");
    scanf("%d",  &length);
    printf("Enter the breadth of rectangle");
    scanf("%d", &breadth);

    int area = length * breadth;
    printf("area of rectangle is %d", area);
    return 0;
}
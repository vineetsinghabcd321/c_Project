//write a program to find out area of triangle whose sides are given by user.
#include <stdio.h>
int main() {
    int base, height, area;
    printf("Enter the base and height of triangle");
    scanf("%d %d", &base, &height);
    // calculate area of triangle
    area =0.5*base*height;

    printf("area of triangle is = %d\n", area);
    return 0;
}
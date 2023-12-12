//WAP that tells as wheather given year is a leap year or not.
#include <stdio.h> 
int main() {
    int year;

    printf("Enter the year");
    scanf("%d", &year);

    if(year % 2 == 0) {
        printf("this is a leap year %d\n", year);
    } else {
        printf("this is not a leap year %d\n", year);
    } return 0;
}
//WAP to print sum of even and odd number from 1 to N numbers.

#include <stdio.h> 
int main() {
    int n, i;
    int sumEven=0, sumOdd= 0;

    printf("Enter the number");
    scanf("%d", &n);

    for(i =1; i<=n; i++) {
        if(i%2==0) {
        sumEven +=i;
    } else
     {
        sumOdd +=i;
    } 
     }
    printf("print the sum of number from 1 to %d : %d\n", n, sumEven);
    printf("print the sum of odd numbers from 1 to %d : %d\n", n, sumOdd);

    return 0;
}
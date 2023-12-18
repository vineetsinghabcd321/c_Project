//  WAP to find the sum of digits of the entered numbers.
#include <stdio.h>
int main(){
    int num, sum=0, digit;
    printf("Enter the number");
    scanf("%d", &num);

    while(num>0) {
        digit = num%10;
        sum += digit;
        digit /=10;
    }
    printf("sum of digit is %d \n", sum);
    return 0;
}

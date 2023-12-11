// Write a program to find the greatest of three numbers.
#include <stdio.h>
int main (){
    int num1, num2, num3;

    printf("Enter three numbers:");
    scanf("%d %d %d", &num1, &num2, &num3);

    // check then condition 
    if(num1>=num2 && num1>=num3) {
        printf("the greatest number is %d\n", num1);
    } else if (num2>=num1 && num2>=num3)
    {
        printf("the greatest number is %d\n", num2);
    } else {
        printf(" the greatest number is %d\n", num3);
    } return 0;
}
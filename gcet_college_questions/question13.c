//WAP to find the factorail of given number.

#include <stdio.h>
int main() {
    int num, i;
    int factorail =1;
    printf("enter the number");
    scanf("%d", &num);

    if(num<0) {
        printf("factorial number is not defined for negative number");
    } else {
        for(i=1; i<=num; i++)
        factorail *=i;
    }
    printf("factorial is %d = %d\n", num, factorail);
    return 0;
} 
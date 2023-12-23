#include <stdio.h> 
int main() {
    int a, b, c;
    printf("Enter the number:");
    scanf("%d %d ", &a,&b);

    printf("before swapping the values %d %d \n", a, b);

    c = a ;
    a= b;
    b= c;

    printf("after the swapping the values %d %d\n", a,b);
    return 0;
}
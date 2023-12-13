// Write a program of table 6 in c programming.
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number");
    scanf("%d", &n);

    printf("Table of %d\n", n);
    for(int i = 1; i<=10; i++) {
        printf("%d*%d = %d\n", n, i,n*i);
    }
    return 0;
}

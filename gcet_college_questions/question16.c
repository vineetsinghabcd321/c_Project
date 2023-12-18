//WAP to check whether the  entered numbers is prime or not.
#include <stdio.h>
 int isPrime(int num) {
    if(num<=1) {
    return 0;
 }
 for(int i=2; i*i<=num; i++) {
    if(num%2==0) {
        return 0;
    }
 }     return 1;
 } 
    

    int main() {
        int num;
        //input by user
        printf("Enter the number:");
        scanf("%d", &num);
         
         //check is prime or not
         if (isPrime(num)) {
            printf("%d is prime number\n", num);
         } else{
            printf("%d is not a prime number\n", num);
         }
         return 0;
    }
 

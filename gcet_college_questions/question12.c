//WAP to print the sum of all numbers up to a given numbers.
#include <stdio.h>
int main() {
   int n, sum =0;
   printf("Enter the number");
   scanf("%d", &n);

   for(int i =1; i<=n; i++) {
      sum = sum+i;
   }
   printf("Sum of all numbers %d is %d\n", n, sum);
   return 0;
}
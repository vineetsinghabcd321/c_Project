//WAP to print armstrong numbers from 1 to 100
#include <stdio.h>
int main() {
    int i, num1, num2, mem, sum;

for( i =1; i<=1000; i++) {
    num1 = i;
        sum=0;
        mem=num1;
     
     while(num1>0) {
        num2=num1%10;
       
        sum = sum + num2 * num2 * num2;
         num1 /=10;
    } if(sum == mem) {
        printf("%d\n", mem);
    }
}
    return 0;
}
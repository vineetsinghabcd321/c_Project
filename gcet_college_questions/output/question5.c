//write a program that accpets the temperature in centigrade and converts it
// into fahrenheit using the formula C/5 = (F - 32) / 9

#include <stdio.h> 

int main() {
    float fahrenheit, celsius;

    printf("Enter the temperature in centigrade :");
    scanf("%f", &celsius);

    fahrenheit = (celsius/5 * 9) + 32;

    printf("temperature in frahrenheit 2.f %f", fahrenheit);
    return 0;

}
/*You are building a module for a smart home weather station that reads room temperature in
Celsius and converts it to Fahrenheit for international display.*/
#include<stdio.h>
int main()
{
    float Celsius,Fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f",&Celsius);

    Fahrenheit = (Celsius * 9 / 5) + 32;

    printf("Temperature in Fahrenheit: %.2f\n",Fahrenheit);
    return 0;
}
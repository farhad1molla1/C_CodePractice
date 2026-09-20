#include<stdio.h>
int main()
{
    float celcius,fahrenheit;
    scanf("%f",&celcius); //input

    fahrenheit = (celcius * 9/5)+32; //process

    printf("%.2f F",fahrenheit);
    return 0;
}
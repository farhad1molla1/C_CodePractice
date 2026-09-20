/*A video streaming platform records total media duration in seconds. You need to write a C
script to present this duration in a readable format ( hours : minutes : seconds ).*/
#include<stdio.h>
int main()
{
    int seconds,hours,minutes,rem_sec;
    printf("Enter total seconds: ");
    scanf("%d",&seconds);

    hours=seconds/3600;
    minutes=(seconds%3600)/60;
    rem_sec=seconds%60;

    printf("Formatted Time: %d hour , %d minute , %d\n second",hours,minutes,rem_sec);
return 0;
}

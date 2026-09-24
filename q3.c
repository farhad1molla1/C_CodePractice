/*A room-planning application needs to calculate the floor area and boundary length of a rectangular space.*/
#include<stdio.h>
int main()
{
    float length,width,area,perimeter;
    printf("Enter length and width: ");
    scanf("%f %f", &length, &width);

    area = length * width;
    perimeter = 2 * (length + width);
    
    printf("Area/Perimeter: Area= %.2f Perimeter= %.2f\n",area, perimeter);
    return 0;
}
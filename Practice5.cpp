#include <stdio.h>


int main() 
{
    float radius, area, diameter, circumference;
    printf("Enter the circumference of the circle: ");
    scanf("%f", &circumference);
    diameter = circumference / 3.14;
    radius = diameter / 2;
    area = 3.14 * radius * radius;
    printf("The diameter of the circle is: %.2f\n", diameter);
    printf("The area of the circle is: %.2f\n", area);
    printf("The circumference of the circle is: %.2f\n", circumference);
    return 0;
}

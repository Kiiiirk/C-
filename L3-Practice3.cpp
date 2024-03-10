#include <stdio.h>

 int main()
 {
    int radius;
    float answer, circ;

    printf("Enter radius: ");
    scanf("%d",&radius);

    answer = 2*3.14*radius;

    circ = 3.14*radius*radius;

    printf("\nThe area of the circle is: %f", answer);
    printf("\nThe circumference of the circle is: %f", circ);

 return 0;
 } 

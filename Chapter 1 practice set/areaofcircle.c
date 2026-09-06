#include <stdio.h>
#include <stdlib.h>
float pie = 3.14;
int main()
{
    float radius, height;
    printf("\n****** Area of Circle Calculator *****\n\n");
    printf("Enter the radius of the circle (in meters): ");
    scanf("%f", &radius);
    printf("\nThe area of the circle is: %.2f meter square\n", pie * radius * radius);
    printf("\ndo you want to calculate the area of a cylinder? (1 for yes, 0 for no): ");
    scanf("%f", &height);
    if (height == 1)
    {
        printf("Enter the height of the cylinder (in meters): ");
        scanf("%f", &height);
        printf("\nThe volume of the cylinder is: %.2f meter cube\n", pie * radius * radius * height);
    }
    return 0;
}
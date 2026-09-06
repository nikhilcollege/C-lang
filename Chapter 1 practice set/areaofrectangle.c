// #include <stdio.h>
// #include <stdlib.h>

// int areaOfRectangle(int length, int width)
// {
//     return length * width;
// }
// int main()
// {
//     int length, width;
//     printf("\n****** Area of Rectangle Calculator *****\n\n");
//     printf("Enter the length of the rectangle (in meters): ");
//     scanf("%d", &length);
//     printf("Enter the width of the rectangle:(in meters): ");
//     scanf("%d", &width);
//     printf("\nThe area of the rectangle is: %d meter square\n", areaOfRectangle(length, width));
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int length, width;
    printf("\n****** Area of Rectangle Calculator *****\n\n");
    printf("Enter the length of the rectangle (in meters): ");
    scanf("%d", &length);
    printf("Enter the width of the rectangle (in meters): ");
    scanf("%d", &width);
    printf("\nThe area of the rectangle is: %d meter square\n", length * width);
    return 0;
}
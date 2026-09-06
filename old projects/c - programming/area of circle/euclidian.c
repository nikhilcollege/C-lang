#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.142857142857143

float Euclidiandistance(int x1, int x2, int y1, int y2)
{
    return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}
float areaofcircle(int x1, int x2, int y1, int y2, float (*fptr)(int, int, int, int))
{
    float radius;
    radius = fptr(x1, x2, y1, y2);
    return PI * pow(radius, 2);
}
int main()
{
    int x1, x2, y1, y2;
    float (*ptr)(int, int, int, int);
    ptr = Euclidiandistance;
    printf("Enter the value of x1 :");
    scanf("%d", &x1);
    printf("Enter the value of y1 :");
    scanf("%d", &y1);
    printf("Enter the value of x2 :");
    scanf("%d", &x2);
    printf("Enter the value of y2 :");
    scanf("%d", &y2);
    // printf("%f\n",Euclidiandistance(x1, x2, y1, y2));
    printf("\nThe area of circle is : %f\n\n", areaofcircle(x1, x2, y1, y2, ptr));
    return 0;
}
#include <stdio.h>
#include <conio.h>

int main()
{
    float a,b;
    printf("Enter the first number :\n");
    scanf("%f", &a);
    printf("Enter the second number :\n");
    scanf("%f", &b);
    printf("The sum of first and second number is : %f\n", a+b);
    printf("The difference of first and second number is : %f\n", a-b);
    printf("The product of first and second number is : %f\n", a*b);
    printf("The division of first and second number is : %f\n", a/b);
    //printf("The remainder of the division of first and second number is : %f\n", a%b);
    printf("Thanks for visiting\n");
    printf("Hope you visit again\n\a");
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float celsius, fahrenheit;
    printf("\n****** Celsius to Fahrenheit Converter *****\n\n");
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9/5) + 32;
    printf("\nTemperature in Fahrenheit: %.2f\n\n", fahrenheit);
    return 0;
}
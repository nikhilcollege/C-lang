#include <stdio.h>
#include <stdlib.h>

int main()
{
    float principal, rate, time, simple_interest;
    printf("\n****** Simple Interest Calculator *****\n\n");
    printf("Enter the principal amount (in rupees): ");
    scanf("%f", &principal);
    printf("Enter the rate of interest (in percentage): ");
    scanf("%f", &rate);
    printf("Enter the time (in years): ");
    scanf("%f", &time);
    simple_interest = (principal * rate * time) / 100;
    printf("\n\nSimple Interest: %.2f\n", simple_interest);
    printf("Total Amount: %.2f\n\n", principal + simple_interest);
    return 0;
}
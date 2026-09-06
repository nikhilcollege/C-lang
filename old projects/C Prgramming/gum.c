#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("\nEnter the first number :- ");
    scanf("%d", &a);
    printf("Enter the second number :- ");
    scanf("%d", &b);
    printf("The addition of first and second number is :- %d\n",  a+b);
    printf("The subtraction of first and second number is :- %d\n",  a-b);
    printf("The product of first and second number is :- %d\n",  a*b);
    printf("The division of first and second number is :- %.2f\n", (float) a/b);
    return 0;
}
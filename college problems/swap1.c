#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("\n****** Swap Two Numbers *****\n\n");
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("\nBefore swapping: a = %d, b = %d\n", a, b);
    c = a;
    a = b;
    b = c;
    printf("After swapping: a = %d, b = %d\n\n", a, b);
    return 0;
}
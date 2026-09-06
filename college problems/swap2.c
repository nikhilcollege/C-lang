#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    printf("\n****** Swap Two Numbers *****\n\n");
    printf("Enter the first number: ");
    scanf("%d", &x);
    printf("Enter the second number: ");
    scanf("%d", &y);
    printf("\nBefore swapping: x = %d, y = %d\n", x, y);
    x = x + y;
    y = x - y;
    x = x - y;
    printf("After swapping: x = %d, y = %d\n\n", x, y);
    return 0;
}
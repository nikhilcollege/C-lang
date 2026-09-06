#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, factorial=1;
    printf("\n***** Factorial Finder *****\n");
    printf("\nEnter a number(Note this program only calculates factorial upto 12!): ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        factorial = factorial * i;
    }
    
    printf("\nThe factorial of %d is %d\n\n",num,factorial);
    return 0;
}
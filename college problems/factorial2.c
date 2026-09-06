#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, factorial=1,num2;
    printf("\n***** Factorial Finder *****\n");
    printf("\nEnter a number(Note this program only calculates factorial upto 12!): ");
    scanf("%d", &num);
    num2 = num;
    for (int i = 1; i < num; num=num-2)
    {
        factorial = factorial*num*(num-1);
    }
    
    printf("\nThe factorial of %d is %d\n\n",num2,factorial);
    return 0;
}
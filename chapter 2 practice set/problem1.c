#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n***** To check if the number is divisible by 97 or Not *****\n\n");
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("\nRemainder When divided by 97: %d\n\n", num % 97);
    if (num % 97 == 0)
    {
        printf("\n%d is divisible by 97\n\n", num);
    }
    else
    {
        printf("%d is not divisible by 97\n\n", num);
    }
    return 0;
}
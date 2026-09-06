#include <stdio.h>
#include <stdlib.h>

int ispalidrome(int num)
{
    int temp = num;
    int rev = 0, rem;
    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }

    if (temp == rev)
    {
        printf("\nYes, the number %d is a Palidrome\n\n", temp);
    }
    else
    {
        printf("\nNo, the number %d is not a Palidrome\n\n", temp);
    }
}
int main()
{
   int num;
    printf("\nEnter the number which you want to check that it is a Palidrome or not : ");
    scanf("%d", &num);
    ispalidrome(num);
    return 0;
}

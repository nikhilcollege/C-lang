#include <stdio.h>
#include <conio.h>

int factorial(int num)
{
    if (num == 1 || num == 0)
    {
        return 1;
    }
    else
    {
        return num * factorial(num - 1);
    }
}
int main()
{
    int num;
    printf("\nEnter a number which you want to find the factorial of : ");
    scanf("%d", &num);
    printf("\nThe factorial of %d! is %d.\n\n", num,factorial(num));
    return 0;
}
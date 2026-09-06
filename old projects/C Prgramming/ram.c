#include <stdio.h>
int factorial(int number)
{
    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return number*factorial(number - 1); // Recursion of Function
    }
}
int main()
{
    int num;
    printf("Enter a no. :");
    scanf("%d", &num);
    printf("\nThe factorial of %d is %d", num, factorial(num));
    return 0;
}
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int i , j;
//     int product=1;
//     printf("Enter the number which you want the factorial of :- ");
//     scanf("%d", &i);
//     j=i;
//     for (; i >= 1; i--)
//     {
//         product *= i;
//     }
//     printf("the factorial of %d is = %d", j, product);

//     return 0;
// }
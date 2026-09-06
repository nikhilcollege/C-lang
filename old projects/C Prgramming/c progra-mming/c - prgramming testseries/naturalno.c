#include <stdio.h>
#include <conio.h>

// int func(int n)
// {
//     if (n == 0)
//     {
//         return 0; this function runs in linear time means user input value is directly proportional to time.
//     }
//     else
//     {
//         return n + func(n - 1);
//     }
// }
int main()
{
    int a;
    printf("\nEnter the last natural number from where you want the sum : ");
    scanf("%d", &a);
    // printf("\nThe sum of first %d natural numbers is %d.\n\n", a, func(a));
    printf("\nThe sum of first %d natural numbers is %d.\n\n", a, (a*a+a)/2);
    // this program runs in constant time.
    // printf("\nThe sum of first %d natural numbers is %d.\n\n", a, (a*(a+1))/2);similar to first one.
    return 0;
}
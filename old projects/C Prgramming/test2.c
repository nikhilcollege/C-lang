#include <stdio.h>
#include <conio.h>
int fibo_iterative(int n)
{
    int f1 = 0, f2 = 1, f3;
    for (int i = 0; i < n; i++)
    {
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
    }
    return f3;
}
int fibo_recurcive(int n)
{
    if (n==1 || n==2)
    {
        return n-1;
    }
    else{
        return fibo_recurcive(n-1)+fibo_recurcive(n-2);
    }
}
int main()
{
    int n,a;
    printf("\nEnter the index no. for which you want the fibonacci series no. :- ");
    scanf("%d", &n);
    printf("The %d element of fibonacci series is : %d\n", n, fibo_iterative(n-2));
    printf("The %d element of fibonacci series is : %d\n", n, fibo_recurcive(n));
    return 0;
}
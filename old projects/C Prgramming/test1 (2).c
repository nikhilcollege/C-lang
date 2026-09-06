#include <stdio.h>
#include <conio.h>
int main()
{
    static int n, c, f1 = 0, f2 = 1;
    printf("Enter number for how many element you want in the fibonacci series :- ");
    scanf("%d", &n);
    printf("fibonacci series :\n");
    if (n >= 2)
    {
        printf("%d %d", 0, 1);
        n = n - 2;
        for (int i = 0; i < n; i++)
        {
            c = f1 + f2;
            printf(" %d", c);
            f1 = f2;
            f2 = c;
        }
    }
    // esleif(n == 1)
    // {
    //     printf("%d", 0);
    // }
    else
    {
        printf("Nothing! because you entered '0'.\n");
    }
    return 0;
}
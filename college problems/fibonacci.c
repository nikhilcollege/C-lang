#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,a=0,b=1;
    printf("\n\n***** Fibonacci Sequence maker *****\n\n");
    printf("Enter the number of terms you want in the Fibonacci series : ");
    scanf("%d", &num);
    if (0 < num)
    {
        printf("\n0\n");
        if (1 < num)
        {
            printf("1\n");
        }
    }
    else
    {
        printf("\n\nwrong input\n\n");
    }

    for (int i = 2; i < num; i++)
    {
        printf("%d\n",a+b);
        b = a+b;
        a = b-a;
    }
    
    return 0;
}
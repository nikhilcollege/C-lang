#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter a number : ");
    // scanf("%d", &num);
    num = 5;
    printf("\n");
    int k = ((num * 2) + 1);
    for (int i = 1; i < (num * 2) + 1; i++)
    {
        for (int j = 2; j <= k; j++)
        {
            if (j == k)
            {
                for (int l = 1; l <= i; l++)
                {
                    printf("*");
                }
                k--;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
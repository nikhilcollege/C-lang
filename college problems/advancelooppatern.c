#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("\nEnter the number of rows you want in traingle star pattern : ");
    scanf("%d", &num);
    printf("\n");
    int k = (num + 1);
    for (int i = 1; i < (num + 1); i++)
    {
        for (int j = 2; j <= k; j++)
        {
            if (j == k)
            {
                for (int l = 1; l <= i; l++)
                {
                    printf("* ");
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
    printf("\n");
    return 0;
}
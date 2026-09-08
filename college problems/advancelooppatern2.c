#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, s = 0;
    printf("\nEnter the number of rows you want in traingle star pattern : ");
    scanf("%d", &num);
    printf("\n");
    int k = num;
    for (int i = num; i >= 1; i--)
    {
        for (int j = k; j >= 1; j--)
        {
            if (j == k)
            {
                for (int l = 0; l < s; l++)
                {
                    printf(" ");
                }
            }

            printf("* ");
        }
        printf("\n");
        k--;
        s++;
    }
    printf("\n");
    return 0;
}
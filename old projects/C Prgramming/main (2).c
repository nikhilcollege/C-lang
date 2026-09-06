#include <stdio.h>

int main()
{
    int num, index = 0;
    printf("Enter a number\n");
    scanf("%d", &num);
    do
    {
        index = index + 1;
        printf("%d\n", index + 1);
    } while (index < num);
    return 0;
}


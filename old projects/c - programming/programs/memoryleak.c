#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, i = 0;
    int *i2;
    while (i < 1000)
    {
        printf("hello my name is nikhil garg.\n");
        i2 = malloc(1000 * sizeof(int));
        if (i % 100 == 0)
        {
            getchar();
        }
        free(i2);
        i++;
    }
    return 0;
}
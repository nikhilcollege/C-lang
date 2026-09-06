#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int comp;
    srand(time(NULL));
    comp = rand() % 11;
    printf("%d\n",comp);
    return 0;
}
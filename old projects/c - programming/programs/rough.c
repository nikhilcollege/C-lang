#include <stdio.h>
#include <stdlib.h>
int c = 20;
int main()
{
    int c = 10;
    c += 10;
    printf("The value of local c is : %d", c);
    return 0;
}
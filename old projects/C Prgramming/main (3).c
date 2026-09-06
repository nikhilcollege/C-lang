#include <stdio.h>
#include <conio.h>
int main()
{
    int n = 5;
    for (int i = 0; i < 5; i++)
    {
        for (int i = 0; i < n; i++)
        {
            printf(" %c", '*');
        }
        printf("\n");
        n--;
    }
    return 0;
}
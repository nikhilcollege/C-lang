#include <stdio.h>
#include <conio.h>

int main()
{
    int num;
    printf("\nEnter a number which you want the multiplication table of : ");
    scanf("%d", &num);
    printf("\n");
    for (int i = 0; i < 11; i++)
    {
        printf("%d X %d = %d\n", num,i,num*i);
    }
    printf("\n");
    return 0;
}
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,sum = 0;
    do
    {
        printf("Enter a number : \n");
        scanf("%i", &n);
        sum += n;
    } while (n != 0);
    printf("sum is : %d \n" , sum);
    getch();
    return 0;
}
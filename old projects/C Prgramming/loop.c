#include <stdio.h>
#include <conio.h>

int main()
{
    int a;
    int b=0;
    printf("Enter the number you want the multiplication table of :\n");
    scanf("%d", &a);
    printf("The multiplication table of %d is as the following :\n", a);
    do
    {
        printf(" %d x %d = %d\n",a,b,a*b);
        b++;
    } while (b <= 10);
    
    printf("Thanks for visiting\n");
    printf("Hope you visit again\n\a");
    getch();
    return 0;
}
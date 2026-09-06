#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    int arg, sum = 0;
    char name[6];
    printf("\nEnter you name : ");
    gets(name);
    printf("\nyour name is %s\n", name);
    if (name[0] == 'N' || name[0] == 'n' && name[1] == 'i' || name[1] == 'I' && name[2] == 'k' || name[2] == 'K' && name[3] == 'h' || name[3] == 'H' && name[4] == 'i' || name[4] == 'I' && name[5] == 'l' || name[5] == 'L')
    {
        printf("\nYour game starts now!\n\n");
        do
        {
            printf("Enter a number : ");
            scanf("%d", &arg);
            sum += arg;
        } while (arg != 0);
        printf("\n\nThe sum of all no. you entered is : %d\n\n", sum);
    }
    else
    {
        printf("\nSorry, you are not a VIP so, you can't play this game.\n\n");
    }
    return 0;
}
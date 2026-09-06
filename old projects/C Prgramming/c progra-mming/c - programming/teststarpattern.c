#include <stdio.h>
#include <conio.h>
void revesedstar()
{
    int n, j;
    printf("Enter how many lines of stars you want :- ");
    scanf("%d", &n);
    j = n;
    printf("\n");
    for (int i = 0; i < j; i++)
    {
        for (int i = 0; i < n; i++)
        {
            printf(" %c", '*');
            // putchar('*');
        }
        printf("\n");
        n--;
    }
    printf("\n\a");
}
void simplestar()
{
    int n, j = 1;
    printf("Enter how many lines of stars you want :- ");
    scanf("%d", &n);
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < j; i++)
        {
            printf(" %c", '*');
            // putchar('*');
        }
        printf("\n");
        j++;
    }
    printf("\n\a");
}
int main()
{
    char a, gh;
label:
    printf("\nEnter which type of star pattern you want?\n\n");
    printf("Enter 's' for simple traingular star patter.\n");
    printf("Enter 'r' for reversed traingular star patter.\n");
    printf("Enter :- ");
    scanf(" %c", &a);
    if (a == 'r' || a == 'R')
    {
        printf("\n");
        revesedstar();
    }
    else if (a == 's' || a == 'S')
    {
        printf("\n");
        simplestar();
    }
    printf("Press 'r' key to reuse the program or press any key to exit the program.\n");
    printf("Enter :- ");
    scanf(" %c", &gh);
    if (gh == 'r' || gh == 'R')
    {
        goto label;
    }
    else
    {
        printf("Thanks for using our program.\n");
        printf("Hope you use again.\n");
    }
    // getch();
    return 0;
}
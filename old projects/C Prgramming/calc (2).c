#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    char c,result;
    label:
    printf("\nEnter the first no. :- ");
    scanf("%d", &a);
    printf("Enter the second no. :- ");
    scanf("%d", &b);
    printf("Enter the operation you want between the two no. :- ");
    scanf(" %c", &c);
    if (c == '+')
    {
        printf("\nThe sum of first and second no. is :- %d\n", a+b );
    }
    else if (c == '-')    
    {
        printf("\nThe difference of first and second no. is :- %d\n", a-b);
    }
    else if (c == '*')
    {
        printf("\nThe product of first and second no. is :- %d\n", a*b);
    }
    else if (c == '/')
    {
        printf("\nThe divion of first and no. is :- %d\n", a/b);
    }
    else{
        printf("\nyou entered a wrong value.\n");
        printf("Please try again!\n");
    }
    printf("\nEnter 'r' to restart the program or enter any key to exit the program\n");
    scanf(" %c", &result);
    if (result == 'r' || result == 'R')
    {
        goto label;
    }
    else{
        printf("Thanks\n");
    }
    
    return 0;
}
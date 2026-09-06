#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    int marks[] = {0,9,3,4,5,6,7,8,9,13,6};
    label:
    printf("Enter your last two digits of your roll no. :- ");
    scanf("%d", &i);
    if (i < 1 || i > 11)
    {
        printf("Sorry, you entered a wrong value.\nPlease try again.\n\n");
        goto label;
    }
    else{
        if (i < 10)
        {
            printf("The marks of roll no. 451290%d is :- %d", i, marks[i] );
        }
        else{
            printf("The marks of roll no. 45129%d is :- %d", i, marks[i] );
        }
    }
    return 0;
}
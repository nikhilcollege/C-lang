#include<stdio.h>
#include<conio.h>

int main()
{
    char subject;
    printf("\nWhich exam you have passed from our institute :-\n");
    printf("Enter a for both maths & science.\n");
    printf("Enter b for only maths\n");
    printf("Enter c for only science\n\n");
    printf("Enter here :- "); 
    scanf("%c", &subject);
    switch (subject)
    {
    case 'a':
        printf("\nCongratulation! you have passed both maths & science exam from our institute.\n");
        printf("So, we will give you a gift of $45.\n\n\a");
        break;
    case 'b':
        printf("\nCongratulation! you have passed maths exam from our institute.\n");
        printf("So, we will give you a gift of $15.\n\n\a");
        break;
    case 'c':
        printf("\nCongratulation! you have passed science exam from our institute.\n");
        printf("So, we will give you a gift of $15.\n\n\a");
        break;
    default:
        printf("\nsorry! you entered a wrong input.\n\n");
    }
    getch();
    return 0;
}
#include<stdio.h>
#include<conio.h>
int main()
{
    int subject;
    printf("\nWhich exam you have passed from our institute :-\n");
    printf("Enter 1 for both maths & science.\n");
    printf("Enter 2 for only maths\n");
    printf("Enter 3 for only science\n\n");
    printf("Enter here :- "); 
    scanf("%d", &subject);
    if (subject==1)
    {
        printf("\nCongratulation! you have passed both maths & science exam from our institute.\n");
        printf("So, we will give you a gift of $45.\n\n\a");
    }
    else if (subject==2)
    {
        printf("\nCongratulation! you have passed maths exam from our institute.\n");
        printf("So, we will give you a gift of $15.\n\n\a");
    }
    else if (subject==3)
    {
        printf("\nCongratulation! you have passed science exam from our institute.\n");
        printf("So, we will give you a gift of $15.\n\n\a");
    }
    else {
        printf("\nsorry! you entered a wrong input.\n\n");
    }
    getch();
    return 0;
}
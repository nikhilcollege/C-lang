#include <stdio.h>

int main()
{
    int exam;
    printf("which exam you have cleared from our institute?\n");
    printf("1) Both science and maths\n");
    printf("2) Maths\n");
    printf("3) science\n");
    printf("4) Nothing\n");
    printf("\n***Type 1 for 1st option, 2 for second option, 3 for 3rd option and 4 for 4th option***\n");
    printf("\nEnter here :\n");
    scanf("%d", &exam);
    if (exam==1)
    {
        printf("Congratulation!! you cleared both maths and science exam so, you have won a prize of $45\n\a");
    }
    else if (exam==2)
    {
        printf("Congratulation!! you cleared maths exam so, you have won a prize of $15\n\a");
    }
    else if (exam==3)
    {
        printf("Congratulation!! you cleared science exam so, you have won a prize of $15\n\a");
    }
    else if (exam==4)
    {
        printf("Sorry you are fail but don't worry try again next time");
    }
    else 
    {
        printf("You have entered a wrong numer");
    }
    return 0;
}
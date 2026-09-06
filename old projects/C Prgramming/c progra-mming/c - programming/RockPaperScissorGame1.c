#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int Uscore = 0;
    int Cscore = 0;
    char out;
    printf("\n\n*************** Rock Paper Scissor Game ***************\n\n\n");
    char *ptr;
    int length;
    printf("What is the length of your name : ");
    scanf("%d", &length);
    ptr = (char *)malloc((length + 1) * 1);
    getchar();
    printf("\nEnter your name : ");
    gets(ptr);
label:
    printf("\n\nEnter 'R' for Rock.");
    printf("\nEnter 'P' for Paper.");
    printf("\nEnter 'S' for scissor.\n\n\n");
    printf("%s\t\tVS\t\t\b\b\b\bComputer\n\n", ptr);
    char point;
    int comp;
    for (int i = 0; i < 3; i++)
    {
        printf("Round %d.\t\t\t\b\b\b\bRound %d.\n\n", i + 1, i + 1);
    eld:
        printf("Enter Here : ");
        scanf("%c", &point);
        srand(time(NULL));
        comp = rand() % 3;
        if (comp == 0)
        {
            printf("\t\t\t\t\b\b\bRock\n");
        }
        else if (comp == 1)
        {
            printf("\t\t\t\t\b\b\bPaper\n");
        }
        else if (comp == 2)
        {
            printf("\t\t\t\t\b\b\bScissor\n");
        }
        if (((point == 'r' || point == 'R') && comp == 0) || ((point == 's' || point == 'S') && comp == 2) || ((point == 'p' || point == 'P') && comp == 1))
        {
            Cscore++;
            Uscore++;
            printf("\nScore = %d\t\t\t\b\b\b\bScore = %d\n\n", Uscore, Cscore);
        }
        else if (((point == 'r' || point == 'R') && comp == 1) || ((point == 's' || point == 'S') && comp == 0) || ((point == 'p' || point == 'P') && comp == 2))
        {
            Cscore++;
            printf("\nScore = %d\t\t\t\b\b\b\bScore = %d\n\n", Uscore, Cscore);
        }
        else if (((point == 'r' || point == 'R') && comp == 2) || ((point == 's' || point == 'S') && comp == 1) || ((point == 'p' || point == 'P') && comp == 0))
        {
            Uscore++;
            printf("\nScore = %d\t\t\t\b\b\b\bScore = %d\n\n", Uscore, Cscore);
        }
        else
        {
            printf("You entered a wrong value!\n");
            printf("Try again!\n\n");
            getchar();
            goto eld;
        }
        getchar();
    }
    printf("*****************************************************\n\n");
    printf("The total score of computer by yours is : %d \\ %d\n\n", Cscore, Uscore);
    if (Uscore == Cscore)
    {
        printf("\nThe Game is Draw !!\n\n\n");
    }
    else if (Uscore < Cscore)
    {
        printf("\nThe Game is Over !!\a\n\n\n");
    }
    else
    {
        printf("\nYou Win this Game !!\a\n\n\n");
    }
    printf("\nPress 'R' if you want to play this game again or Press any key if you want to exit the game.\n");
    scanf(" %c", &out);
    getchar();
    if (out == 'r' || out == 'R')
    {
        Uscore = 0;
        Cscore = 0;
        printf("\n\n\n*************** Rock Paper Scissor Game ***************\n\n");
        goto label;
    }
    else
    {
        free(ptr);
    }
    
    return 0;
}
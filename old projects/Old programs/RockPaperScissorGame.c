#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int Uscore = 0;
    int Cscore = 0;
    char out;
    printf("\n\n\t\t\t\t*************** Rock Paper Scissor Game ***************\n\n\n");
    char *ptr;
    int length;
    printf("\t\t\t\t\tWhat is the length of your name : ");
    scanf("%d", &length);
    ptr = (char *)malloc((length + 1) * 1);
    getchar();
    printf("\n\t\t\t\t\tEnter your name : ");
    gets(ptr);
label:
    printf("\n\n\t\t\t\t\t\t\b\bEnter 'R' for Rock.");
    printf("\n\t\t\t\t\t\t\b\bEnter 'P' for Paper.");
    printf("\n\t\t\t\t\t\t\b\bEnter 'S' for scissor.");
    printf("\n\n\n\t\t\t\t\t%s\t\tVS\t\t\b\b\b\bComputer\n\n", ptr);
    char point;
    int comp;
    for (int i = 0; i < 3; i++)
    {
        printf("\t\t\t\t\tRound %d.\t\t\t\b\b\b\bRound %d.\n\n", i + 1, i + 1);
    eld:
        printf("\t\t\t\tEnter Here : ");
        scanf("%c", &point);
        srand(time(NULL));
        comp = rand() % 3;
        if (point == 'r' || point == 'R')
        {
            printf("\n\t\t\t\tYou Choose : Rock");
        }
        else if (point == 'p' || point == 'P')
        {
            printf("\n\t\t\t\tYou Choose : Paper");
        }
        else if (point == 's' || point == 'S')
        {
            printf("\n\t\t\t\tYou Choose : Scissor");
        }
        else
        {
            printf("\n\t\t\t\tYou entered a wrong value!\n");
            printf("\t\t\t\tTry again!\n\n");
            getchar();
            goto eld;
        }
        if (comp == 0)
        {
            printf("\t\tComputer Choose : Rock\n\n");
        }
        else if (comp == 1)
        {
            printf("\t\tComputer Choose : Paper\n\n");
        }
        else if (comp == 2)
        {
            printf("\t\tComputer Choose : Scissor\n\n");
        }
        if (((point == 'r' || point == 'R') && comp == 0) || ((point == 's' || point == 'S') && comp == 2) || ((point == 'p' || point == 'P') && comp == 1))
        {
            Cscore++;
            Uscore++;
            printf("\n\t\t\t\t\t\bScore = %d\t\t\t\b\b\b\bScore = %d\n\n", Uscore, Cscore);
        }
        else if (((point == 'r' || point == 'R') && comp == 1) || ((point == 's' || point == 'S') && comp == 0) || ((point == 'p' || point == 'P') && comp == 2))
        {
            Cscore++;
            printf("\n\t\t\t\t\t\bScore = %d\t\t\t\b\b\b\bScore = %d\n\n", Uscore, Cscore);
        }
        else if (((point == 'r' || point == 'R') && comp == 2) || ((point == 's' || point == 'S') && comp == 1) || ((point == 'p' || point == 'P') && comp == 0))
        {
            Uscore++;
            printf("\n\t\t\t\t\t\bScore = %d\t\t\t\b\b\b\bScore = %d\n\n", Uscore, Cscore);
        }
        getchar();
    }
    printf("\t\t\t\t\b*****************************************************\n\n");
    printf("\t\t\t\t\t\b\b\b\b\b\bThe total score of computer by yours is : %d \\ %d\n\n", Cscore, Uscore);
    if (Uscore == Cscore)
    {
        printf("\n\t\t\t\t\t\t\bThe Game is Draw !!\n\n\n");
    }
    else if (Uscore < Cscore)
    {
        printf("\n\t\t\t\t\t\t\bThe Game is Over !!\a\n\n\n");
    }
    else
    {
        printf("\n\t\t\t\t\t\t\bYou Win this Game !!\a\n\n\n");
    }
    printf("\nPress 'R' if you want to play this game again or Press any key if you want to exit the game.\n");
    scanf(" %c", &out);
    getchar();
    if (out == 'r' || out == 'R')
    {
        Uscore = 0;
        Cscore = 0;
        printf("\n\n\n\t\t\t\t*************** Rock Paper Scissor Game ***************\n\n");
        goto label;
    }
    else
    {
        free(ptr);
    }
    
    return 0;
}
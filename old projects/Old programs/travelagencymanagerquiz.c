#include <stdio.h>
#include <conio.h>

struct drivers
{
    char name[20];
    char licence[30];
    char route[20];
    int kms;
} d1, d2, d3;

void input()
{
    static int j = 1;
    printf("\t\t\t\t\t******** Enter the details of driver %d. ********\n", j);

    if (j == 1)
    {
        printf("\n\n\t\t\t\t\tEnter your name : ");
        gets(d1.name);

        printf("\n\t\t\t\t\tEnter your licence number : ");
        scanf("%s", &d1.licence);

        printf("\n\t\t\t\t\tEnter your route : ");
        scanf("%s", &d1.route);

        printf("\n\t\t\t\t\tEnter your average kilometers of drive with us : ");
        scanf("%d", &d1.kms);
        printf("\n");
    }
    else if (j == 2)
    {
        printf("\n\n\t\t\t\t\tEnter your name : ");
        scanf("%s", &d2.name);

        printf("\n\t\t\t\t\tEnter your licence number : ");
        scanf("%s", &d2.licence);

        printf("\n\t\t\t\t\tEnter your route : ");
        scanf("%s", &d2.route);

        printf("\n\t\t\t\t\tEnter your average kilometers of drive with us : ");
        scanf("%d", &d2.kms);
        printf("\n");
    }
    else if (j == 3)
    {
        printf("\n\n\t\t\t\t\tEnter your name : ");
        scanf("%s", &d3.name);

        printf("\n\t\t\t\t\tEnter your licence number : ");
        scanf("%s", &d3.licence);

        printf("\n\t\t\t\t\tEnter your route : ");
        scanf("%s", &d3.route);

        printf("\n\t\t\t\t\tEnter your average kilometers of drive with us : ");
        scanf("%d", &d3.kms);
    }
    j++;
}
void output()
{
    static int i = 1;
    printf("\n\n\n\n\t\t\t\t\t******** The details of drive %d. ********\n\n", i);

    if(i == 1)
    {
    printf("\n\t\t\t\t\t\tName = %s\n", d1.name);

    printf("\n\t\t\t\t\t\tLicence number = %s\n", d1.licence);

    printf("\n\t\t\t\t\t\tRoute = %s\n", d1.route);

    printf("\n\t\t\t\t\t\tAverage kilometer of drive with us = %d\n", d1.kms);
    }
    else if(i == 2)
    {
    printf("\n\t\t\t\t\t\tName = %s\n", d2.name);

    printf("\n\t\t\t\t\t\tLicence number = %s\n", d2.licence);

    printf("\n\t\t\t\t\t\tRoute = %s\n", d2.route);

    printf("\n\t\t\t\t\t\tAverage kilometer of drive with us = %d\n", d2.kms);
    }
    else if(i == 3)
    {
    printf("\n\t\t\t\t\t\tName = %s\n", d3.name);

    printf("\n\t\t\t\t\t\tLicence number = %s\n", d3.licence);

    printf("\n\t\t\t\t\t\tRoute = %s\n", d3.route);

    printf("\n\t\t\t\t\t\tAverage kilometer of drive with us = %d\n\n\n", d3.kms);
    }
    i++;
}
int main()
{
    printf("\n\n\t\t\t*************** Welcome to the app of Nikhil's Travelling agency *************** \n\n");

    for (int i = 0; i < 3; i++)
    {
        input();
    }
    for (int i = 0; i < 3; i++)
    {
        output();
    }

    return 0;
}

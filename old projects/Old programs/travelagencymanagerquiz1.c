#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char name[20];
    char licence[30];
    char route[20];
    int kms;
} drivers;
void input(int *n, drivers *ptr)
{
    for (int i = 0; i < *n; i++)
    {
        printf("\n\n\t\t\t\t******** Enter the details of driver %d. ********\n", i + 1);
        getchar();
        printf("\n\n\t\t\t\t\tEnter your name : ");
        gets(ptr[i].name);

        printf("\n\t\t\t\t\tEnter your licence number : ");
        gets(ptr[i].licence);

        printf("\n\t\t\t\t\tEnter your route : ");
        gets(ptr[i].route);

        printf("\n\t\t\t\t\tEnter your average kilometers of drive with us : ");
        scanf("%d", &ptr[i].kms);
    }
}
void output(int *n, drivers *ptr)
{
    for (int i = 0; i < *n; i++)
    {
        printf("\n\n\n\n\t\t\t\t\t******** The details of drive %d. ********\n\n", i + 1);
        printf("\n\t\t\t\t\t\tName = %s\n", ptr[i].name);
        printf("\n\t\t\t\t\t\tLicence number = %s\n", ptr[i].licence);
        printf("\n\t\t\t\t\t\tRoute = %s\n", ptr[i].route);
        printf("\n\t\t\t\t\t\tAverage kilometer of drive with us = %d\n", ptr[i].kms);
    }
}
int main()
{
    int *n;
    drivers *ptr;
    printf("\n\n\t\t\t*************** Welcome to the app of Nikhil's Travelling agency *************** \n\n");
    printf("\n\t\t\t\tEnter how many drivers are inputting their details : ");
    scanf("%d", n);
    ptr = (drivers *)malloc(*n * sizeof(drivers));
    input(n, ptr);
    output(n, ptr);
    printf("\n\n\n");
    free(ptr);
    return 0;
}
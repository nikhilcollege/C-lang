#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *i;
    int length;
    printf("\n\n\t\t\t*************** Welcome to the app of ABC Private limited comapanie. *************** \n\n");
    for (int j = 0; j < 3; j++)
    {
        printf("\n\t\t\t\t\tFor employee %d :\n\n", j + 1);
        printf("\t\t\t\t\tWhat is the lenght of your emloyee ID : ");
        scanf("%d", &length);
        i = (char *)malloc((length + 1) * sizeof(char));
        printf("\n\t\t\t\t\tEnter you employee ID : ");
        scanf("%s", i);
        printf("\n\t\t\t\t\tThe employee ID of first employee is : %s\n\n", i);
        free(i);
    }
    return 0;
}
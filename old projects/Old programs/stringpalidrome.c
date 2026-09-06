#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int palidrome = 1;
    char array[50];
    char revarray[50];
    printf("\nEnter the number which you want to check that it is a Palidrome or not : ");
    scanf("%s", array);
    strcpy(revarray, strrev(array));
    strrev(array);
    for (int i = 0; i < strlen(array); i++)
    {
        if (array[i] == revarray[i])
        {
            continue;
        }
        else
        {
            palidrome = 0;
            break;
        }
        
    }
    
    if (palidrome == 1)
    {
        printf("\nYes, the number %s is a Palidrome\n\n", array);
    }
    else
    {
        printf("\nNo, the number %s is not a Palidrome\n\n", array);
    }

    return 0;
}

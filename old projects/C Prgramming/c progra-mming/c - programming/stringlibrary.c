#include <stdio.h>
#include <string.h>

int main()
{
    char fr1[10];
    char fr2[10];
    char str[10];
    char str3[20];
    printf("\nEnter the name of your first friend : ");
    gets(fr1);
    printf("\nEnter the name of your second friend : ");
    gets(fr2);
    printf("\n%s is the friend of %s.\n\n", fr1, fr2);
    printf("Enter your own name : ");
    gets(str);
    printf("\nThe concatinate of all names is : ");
    strcpy(str3, strcat(fr1, fr2));
    puts(strcat(str3, str));
    printf("\n");
    return 0;
}
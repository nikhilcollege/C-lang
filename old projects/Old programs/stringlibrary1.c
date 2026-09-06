#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char pura[] = "harr";
    char puru[] = "harry";
    // char s3[54];
    // puts(strcat(pura,puru));
    // printf("The length of first string is : %d\n", strlen(pura));
    // printf("The length of second string is : %d\n", strlen(puru));
    // printf("The reverse of first string is : ");
    // puts(strrev(pura));
    // strcpy(s3, strcat(pura,puru));
    // puts(s3);
    printf("\nThe strcmp for s1 and s2 returned : %d \n\n", strcmp(pura,puru));
    return 0;
}
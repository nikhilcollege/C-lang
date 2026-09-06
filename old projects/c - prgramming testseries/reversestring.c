#include <stdio.h>
#include <conio.h>

void reversestring(char string[])
{
    char first;
    int count = 0;
    while (string[count] != '\0')
    {
        count++;
    }
    count--;
    for (int i = 0; i <= count/2; i++)
    {
        first = string[i];
        string[i] = string[count - i];
        string[count - i] = first;
    }
}
int main()
{
    char string[30];
    printf("\nEnter a string which you want to reverse : ");
    gets(string);
    reversestring(string);
    printf("\nThe reversed string is : %s\n\n", string);
    return 0;
}
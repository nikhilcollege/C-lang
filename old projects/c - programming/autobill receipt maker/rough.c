/*
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void replace(char *str)
{
    int i = 0;
    int j;
    while (str[i] != '\0')
    {
        if (str[i] == '{')
        {
            j = i;
            while (str[j] != '}')
            {
                while (str[j] != '\0')
                {
                    str[j] = str[j + 1];
                    j++;
                }
                j = i;
            }
        }
        if (str[i] == '}')
        {
            j = i;
            while (str[j] != '\0')
            {
                str[j] = str[j + 1];
                j++;
            }
            // i--;
        }

        i++;
    }
}
int main()
{
    FILE *ptr = fopen("letter.txt","r");
    char str[150];
    fgets(str, 151, ptr);
    fclose(ptr);
    replace(&str[0]);
    puts(str);
    return 0;
}*/
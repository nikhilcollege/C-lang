#include <stdio.h>
#include <conio.h>

void parser(char string[])
{
    int i = 0;
    for (; string[i] != '\0'; i++)
    {
        if (string[i] == '>' && string[i + 1] != '\0')
        {
            if (string[i + 1] == ' ')
            {
                i++;
                while (string[i + 1] != '<')
                {
                    if (string[i + 1] == ' ' && string[i + 2] == '<')
                    {
                        break;
                    }
                    else
                    {
                        i++;
                        printf("%c", string[i]);
                    }
                }
            }
            else
            {
                while (string[i + 1] != '<')
                {
                    if (string[i + 1] == ' ' && string[i + 2] == '<')
                    {
                        break;
                    }
                    else
                    {
                        i++;
                        printf("%c", string[i]);
                    }
                }
            }
        }
    }
}

int main()
{
    char string[50];
    printf("\nEnter a string : ");
    gets(string);
    printf("\n");
    parser(string);
    return 0;
}
//<span>This is a heading<\span>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
void replace(char *str)
{
    int i = 0;
    int j;
    while (str[i] != '\0')
    {
        if (str[i] == '{' || str[i] == '}')
        {
            j = i;
            while (str[j] != '\0')
            {
                str[j] = str[j + 1];
                j++;
            }
            i--;
        }

        i++;
    }
}
void replace1(char *str)
{
    int i = 0;
    int j, k, m;
    char name[30];
    char item[30];
    char outlet[30];
    printf("********** BILL MAKER **********\n\n");
    printf("\tNAME - ");
    gets(name);
    printf("\tITEM - ");
    gets(item);
    printf("\tOUTLET - ");
    gets(outlet);
    printf("\n");
    while (str[i] != '\0')
    {
        if (str[i] == 'n' && str[i + 1] == 'a' && str[i + 2] == 'm' && str[i + 3] == 'e')
        {
            k = i;
            while (str[k] != '}')
            {
                j = k;
                while (str[j] != '\0')
                {
                    str[j] = str[j + 1];
                    j++;
                }
            }
            m = k;
            for (int z = 0; z < strlen(name); z++)
            {
                while (200)
                {
                    if (str[m] == '\0')
                    {
                        while (m != k)
                        {
                            str[m + 1] = str[m];
                            m--;
                        }
                        goto label;
                    }
                    m++;
                }
            label:
            }
            for (int y = 0; y < strlen(name); y++)
            {
                str[k + y] = name[y];
            }
        }
        else if (str[i] == 'i' && str[i + 1] == 't' && str[i + 2] == 'e' && str[i + 3] == 'm')
        {
            k = i;
            while (str[k] != '}')
            {
                j = k;
                while (str[j] != '\0')
                {
                    str[j] = str[j + 1];
                    j++;
                }
            }
            m = k;
            for (int z = 0; z < strlen(item); z++)
            {
                while (200)
                {
                    if (str[m] == '\0')
                    {
                        while (m != k)
                        {
                            str[m + 1] = str[m];
                            m--;
                        }
                        goto label1;
                    }
                    m++;
                }
            label1:
            }
            for (int y = 0; y < strlen(item); y++)
            {
                str[k + y] = item[y];
            }
        }
        else if (str[i] == 'o' && str[i + 1] == 'u' && str[i + 2] == 't' && str[i + 3] == 'l' && str[i + 4] == 'e' && str[i + 5] == 't')
        {
            k = i;
            while (str[k] != '}')
            {
                j = k;
                while (str[j] != '\0')
                {
                    str[j] = str[j + 1];
                    j++;
                }
            }
            m = k;
            for (int z = 0; z < strlen(outlet); z++)
            {
                while (200)
                {
                    if (str[m] == '\0')
                    {
                        while (m != k)
                        {
                            str[m + 1] = str[m];
                            m--;
                        }
                        goto label2;
                    }
                    m++;
                }
            label2:
            }
            for (int y = 0; y < strlen(outlet); y++)
            {
                str[k + y] = outlet[y];
            }
        }
        i++;
    }
}
int main()
{
    FILE *ptr = fopen("letter.txt", "r");
    char str[251];
    fgets(str, 251, ptr);
    fclose(ptr);
    replace1(&str[0]);
    replace(&str[0]);
    puts(str);
    printf("\n");
    ptr = fopen("bill.txt", "w");
    fputs(str,ptr);
    fclose(ptr);
    return 0;
}
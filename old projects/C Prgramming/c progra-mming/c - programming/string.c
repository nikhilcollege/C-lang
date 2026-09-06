#include <stdio.h>
#include <conio.h>

void func1(char thapa[])
{
    int i = 0;
    printf("using while loop : ");
    while (thapa[i] != '\0')
    {
        printf("%c", thapa[i]);
        i++;
    }
    printf("\n");
}
int main()
{
    // char sodium[43];
    char str[] = "Nikhil is a good boy.";
    char b = '4';
    // char rpt[] = {'N', 'i', 'k', 'h', 'i', 'l', '.', '\0'};
    // printf("using simple printf function : %s\n", str);
    // printf("using simple printf function : %s\n", rpt);
    // printf("\n");
    // printf("using puts : ");
    // puts(str);
    // printf("using puts : ");
    // puts(rpt);
    // printf("\n");
    // func1(str);
    // func1(rpt);
    // printf("\n");
    // printf("enter a string : ");
    // gets(sodium);
    // scanf("%s", &sodium); /*with this method we can't capture with witespaces*/
    // printf("the string you entered is : %s", sodium);
    // char str54[20];
    // printf("Enter something\n");

    // Here \n indicates that take the input
    // until newline is encountered
    // scanf("%[^\n]s", str);
    // printf("%-22.21shello\n", str);
    puts("hlo everyone");
    puts(str);
    return 0;
}
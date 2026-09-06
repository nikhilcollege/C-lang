// #include <stdio.h>
// #include <stdlib.h>

// typedef struct
// {
//     char name[20];
//     char licence[30];
//     char route[20];
//     int kms;
// } drivers;
// void input(int *n, drivers *ptr)
// {
//     for (int i = 0; i < *n; i++)
//     {
//         printf("\n\n\t\t\t\t******** Enter the details of driver %d. ********\n", i + 1);
//         printf("\n\n\t\t\t\t\tEnter your name : ");
//         scanf("%s", &ptr[i].name);

//         printf("\n\t\t\t\t\tEnter your licence number : ");
//         scanf("%s", &ptr[i].licence);

//         printf("\n\t\t\t\t\tEnter your route : ");
//         scanf("%s", &ptr[i].route);

//         printf("\n\t\t\t\t\tEnter your average kilometers of drive with us : ");
//         scanf("%d", &ptr[i].kms);
//     }
// }
// void output(int *n, drivers *ptr)
// {
//     for (int i = 0; i < *n; i++)
//     {
//         printf("\n\n\n\n\t\t\t\t\t******** The details of drive %d. ********\n\n", i + 1);
//         printf("\n\t\t\t\t\t\tName = %s\n", ptr[i].name);
//         printf("\n\t\t\t\t\t\tLicence number = %s\n", ptr[i].licence);
//         printf("\n\t\t\t\t\t\tRoute = %s\n", ptr[i].route);
//         printf("\n\t\t\t\t\t\tAverage kilometer of drive with us = %d\n", ptr[i].kms);
//     }
// }
// int main()
// {
//     int *n;
//     drivers *ptr;
//     printf("\n\n\t\t\t*************** Welcome to the app of Nikhil's Travelling agency *************** \n\n");
//     printf("\n\t\t\t\tEnter how many drivers are inputting their details : ");
//     scanf("%d", n);
//     ptr = (drivers *)malloc(*n * sizeof(drivers));
//     input(n, ptr);
//     output(n, ptr);
//     printf("\n\n\n");
//     free(ptr);
//     return 0;
// }
// #include <stdio.h>
// #include <conio.h>
// void revesedstar()
// {
//     int n, j;
//     printf("Enter how many lines of stars you want :- ");
//     scanf("%d", &n);
//     j = n;
//     printf("\n");
//     for (int i = 0; i < j; i++)
//     {
//         for (int i = 0; i < n; i++)
//         {
//             printf(" %c", '*');
//             // putchar('*');
//         }
//         printf("\n");
//         n--;
//     }
//     printf("\n\a");
// }
// void simplestar()
// {
//     int n, j = 1;
//     printf("Enter how many lines of stars you want :- ");
//     scanf("%d", &n);
//     printf("\n");
//     for (int i = 0; i < n; i++)
//     {
//         for (int i = 0; i < j; i++)
//         {
//             printf(" %c", '*');
//             // putchar('*');
//         }
//         printf("\n");
//         j++;
//     }
//     printf("\n\a");
// }
// int main()
// {
//     char a, gh;
// label:
//     printf("\nEnter which type of star pattern you want?\n\n");
//     printf("Enter 's' for simple traingular star patter.\n");
//     printf("Enter 'r' for reversed traingular star patter.\n");
//     printf("Enter :- ");
//     scanf("%c", &a);
//     if (a == 'r' || a == 'R')
//     {
//         printf("\n");
//         revesedstar();
//     }
//     else if (a == 's' || a == 'S')
//     {
//         printf("\n");
//         simplestar();
//     }
//     printf("Press 'r' key to reuse the program or press any key to exit the program.\n");
//     printf("Enter :- ");
//     getchar();
//     scanf("%c", &gh);
//     if (gh == 'r' || gh == 'R')
//     {
//         getchar();
//         goto label;
//     }
//     else
//     {
//         printf("Thanks for using our program.\n");
//         printf("Hope you use again.\n");
//     }
//     // getch();
//     return 0;
// }
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int chars, i = 0;
//     char a, b;
//     char *ptr;
//     while (i < 3)
//     {
//         printf("Employee %d: Enter the number of characters in your Employee Id\n", i+1);
//         scanf("%d", &chars);
//         printf("Enter the value of a\n");
//         scanf(" %c", &a);
//         printf("Enter the value of b\n");
//         scanf(" %c", &b);
//         ptr = (char *) malloc((chars+1)*sizeof(char));
//         printf("Enter your Employee Id\n");
//         scanf("%s", ptr);
//         printf("Your Employee Id is %s\n",ptr );
//         free(ptr);
//         i = i + 1;
//     }

//     return 0;
// }
// ! We can use getchar for both string and char error and space between " %c" for character input.
// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>

// int main()
// {

//     return 0;
// }
// #include <stdio.h>
// // #include<conio.h>
// void main()
// {
//     int h = 0, m = 0, s = 0;
//     system("cls");
//     printf("Please enter a time format in HH:MM:SS");
//     scanf("%d%d%d", &h, &m, &s);
// start:
//     for (h; h < 24; h++)
//     {
//         for (m; m < 60; m++)
//         {
//             for (s; s < 60; s++)
//             {
//                 system("cls");
//                 printf("\n\n\t\t\t%d:%d:%d", h, m, s);
//                 if (h < 12)
//                 {
//                     printf(" AM");
//                 }
//                 else
//                 {
//                     printf(" PM");
//                 }
//                 printf("\n\n\t\t\tSunday 18 Nov 2018");
//                 for (double i = 0; i < 3619999; i++)
//                 {
//                     i++;
//                     i--;
//                 }
//             }
//             s = 0;
//         }
//         m = 0;
//     }
//     h = 0;
//     goto start;
//     getchar();
// }
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    for (int i = 0; i < 2; i++)
    {
        if (1 == 1)
        {
            break;
        }
        printf("hello\n");
    }
    printf("hello world\n");
    return 0;
}
// #include <stdio.h>
// #include <conio.h>
// void display(int *ptr)
// {
//     printf("%d", *ptr);
// }
// int main()
// {
//     int arr[] = {1, 2, 3, 4};
//     for (int i = 0; i < 4; i++)
//     {
//         display(&arr[i]);
//     }
//     return 0;
// }

// void sum(int *ptr)
// {
//     *(ptr + 1) = 34;
// }

// int main()
// {
//     int array[] = {23, 33, 44, 55};
//     sum(array);
//     int sum_of_array = 0;
//     for (int i = 0; i < 4; i++)
//     {
//         sum_of_array += array[i];
//     }
//     printf("Result = %d", sum_of_array);
//     return 0;
// }
// #include <stdio.h>
// #include <conio.h>

// void arrayrevese(int arr[])
// {
//     int brr[3];
//     for (int i = 0 , j = 6; i < 3; i++ , j--)
//     {
//         brr[i] = arr[i];
//         arr[i] = arr[j];
//         arr[j] = brr[i];
//     }

// }
// void arrayprint(int arr[])
// {
//     for (int i = 0; i < 7; i++)
//     {
//         printf("The value of element %d is %d.\n", i, arr[i]);
//     }

// }
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6, 67};
//     printf("\nThe array before revese is :\n\n");
//     arrayprint(arr);
//     printf("\n\nThe array after revese is :\n\n");
//     arrayrevese(arr);
//     arrayprint(arr);
//     printf("\n");
//     return 0;
//  }
// #include <stdio.h>
// #include <conio.h>

// int main()
// {
//     char string[10] = "hello";
//     printf("%c\n", string[5]);
//     return 0;
// }
// #include <stdio.h>
// #include <conio.h>

// int main()
// {
//     int arg, sum = 0;
//     char name[10];
//     printf("Your game starts now!\n\n");
//     do
//     {
//         printf("Enter a number : ");
//         scanf("%d", &arg);
//         sum += arg;
//     } while (arg != 0);
//     printf("\n\nThe sum of all no. you entered is : %d\n", sum);
//     return 0;
// }
// #include <stdio.h>
// #include <conio.h>

// int main()
// {
// int b = 3, c = 4, d = 5, e = 6, f = 7;
// int a = (e>d?3:44);
// if (a == 2 && b == 3 && c == 4 && d == 5 && e == 6 && f == 7)
// {
//     printf("you are gounchu because the value of a is %d.\n", a);
// }
// else
// {
//     printf("you are not a gounchu because the value of a is %d.\n", a);
// }
// (a == 2 && b == 3 && c == 4 && d == 5 && e == 6 && f == 7?printf("you are gounchu because the value of a is %d.\n", a):printf("you are not a gounchu because the value of a is %d.\n", a)
// );

// for (int i = 0; i = 10; i++)
// {
//     printf("%d\n", i);
// }

// }
// #include <stdio.h>
// #include <conio.h>

// struct rough
// {
//     char a[20];
// }rough1;

// int main()
// {
//     gets(rough1.a);
//     puts(rough1.a);
//     return 0;
// }

// #include <stdio.h>
// #include <conio.h>

// int main()
// {
    
// char letter;
// // label:
// printf("\n Enter first letter of your name :- ");
// scanf(" %c", &letter);
// if (letter == 'p' || letter == 'P')
// {
//     printf("\n your name first letter is %c , you will definately beacame successfull in life", letter);
// }
// else
// {
//     printf("\n your name first letter is %c , you will not succeed in your life", letter);
// }
//     // goto label
//     return 0;
// }

// #include <stdio.h>
// #include <conio.h>


// int main()
// {
//      int i = 1;
//     // for (i = 4; i < 5; i++)
//     // {
//     //     printf("Hello mera name hai nikhil.\n");
//     // }
//     // printf("%d\n", i);
//     // i = 66;
//     // printf("%d\n", i);
//     if (i == 2)
//     {
//         printf("hello nikhil\n");
//     }
    
//     else if (i == 1)
//     {
//         printf("hello world\n");
//     }
    
//     return 0;
// }
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n");
    return 0;
}
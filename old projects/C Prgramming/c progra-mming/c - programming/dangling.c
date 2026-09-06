// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>

// int *myfunc(){
//     static int a = 34;
//     return &a;
// }
// int main()
// {
//     int *ptr = myfunc();
//     printf("%d\n", *ptr);
//     {
//         int i = 3;
//     }
//     return 0;
// }
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    char *str = "hi harry";
    int a;
    int *ptr = (int *)malloc(sizeof(int));;
    free(ptr);
    ptr = NULL;
    printf("helelo\n");
    return 0;
}
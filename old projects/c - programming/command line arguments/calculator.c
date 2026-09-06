#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a = atoi(argv[2]);
    int b = atoi(argv[3]);
    if (argv[1][0] == 'a' || argv[1][0] == 'A')
    {
        printf("%d\n", (a + b));
    }
    else if (argv[1][0] == 's' || argv[1][0] == 'S')
    {
        printf("%d\n", (a - b));
    }
    else if (argv[1][0] == 'm' || argv[1][0] == 'M')
    {
        printf("%d\n", (a * b));
    }
    else if (argv[1][0] == 'd' || argv[1][0] == 'D')
    {
        printf("%d\n", (a / b));
    }

    return 0;
} /*
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>

 int main(int argc, char *argv[])
 {
     char * operation;
     int num1, num2;
     operation = argv[1];
     num1 = atoi(argv[2]);
     num2 = atoi(argv[3]);

     if(strcmp(operation, "add")==0){
         printf("%d\n", num1 + num2);
     }
     else if(strcmp(operation, "subtract")==0){
         printf("%d\n", num1 - num2);
     }
     else if(strcmp(operation, "multiply")==0){
         printf("%d\n", num1 * num2);
     }
     else if(strcmp(operation, "divide")==0){
         printf("%d\n", num1 / num2);
     }


     return 0;
 }*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *ptr = NULL;
    ptr = fopen("file.txt","a+");
    // char str[4];
    // fgets(str,5, ptr);
    // printf("the string is %s\n", str);
    //puts(str);
    fputc('o',ptr);
    fputs("this is nikhil garg from a small town bareta.",ptr);
    fclose(ptr);
    return 0;
}
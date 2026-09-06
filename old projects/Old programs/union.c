#include <stdio.h>
#include <conio.h>
#include <string.h>

union data
{
    int a;
    int b;
    char fav;
    char name[6];
};

int main()
{
    union data l1;
    l1.fav = 'u';
    l1.a = 44;
    l1.b = 43;
    strcpy(l1.name , "Harry");  
    printf("%d\n", l1.a);
    printf("%d\n", l1.b);
    printf("%c\n", l1.fav);
    printf("%s\n", l1.name);
    return 0;
}
#include <stdio.h>
#include <conio.h>

int b = 55;

int func()
{
    static int a = 4;
    a++;
    return a;
}
int main()
{
    int b = 556;
    static int a ;
    a = func();
    printf("%d\n", a);
    a = func();
    printf("%d\n", a);
    printf("%d\n", b);
    return 0;
}
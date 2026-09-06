#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b)
{
    return a + b;
}
int average(int a, int b)
{
    return (a + b) / 2;
}
void greetgoodmorninguser(int (*ptr)(int, int))
{
    printf("hello user good morning.\n");
    printf("The sum of 50 and 50 is %d\n", ptr(50, 50));
}
void greetgoodafternoonuser(int (*fptr)(int, int))
{
    int a,b;
    printf("hello user good afternoon.\n");
    printf("Enter the numbers : ");
    scanf("%d %d",&a,&b);
    printf("The averge of the two numbers you entered is : %d\n", fptr(a,b));
}
void greetgoodeveninguser(int (*fptr)(int, int))
{
    int a,b;
    printf("hello user good evening.\n");
    printf("Enter the numbers : ");
    scanf("%d %d",&a,&b);
    printf("The averge of the two numbers you entered is : %d\n", fptr(a,b));
}
int main()
{
    int (*ptr)(int, int);
    int (*fptr)(int, int);
    ptr = sum;
    fptr = average;
    greetgoodmorninguser(ptr);
    greetgoodafternoonuser(fptr);
    greetgoodeveninguser(fptr);
    return 0;
}
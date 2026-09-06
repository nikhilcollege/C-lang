#include<stdio.h>
#include<conio.h>
int main()
{
    int sum = 1;
    int num, jum;
    int dum = 0, gum =0;

    do {
        printf("Enter a number :- ");
        scanf("%d", &num);
        sum*=num;
        dum+=num;

    }while(num>1);
        printf("The product of the numbers are :- %d\n", sum);
        printf("The addition of the numbers are :- %d\n", dum-1);
    return 0;
}
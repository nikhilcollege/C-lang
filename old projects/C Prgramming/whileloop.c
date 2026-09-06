#include <stdio.h>
#include <conio.h>

int main()
{
    int num;
    int i=0;
    printf("Enter the number you want the multiplication table of : \n");
    scanf("%d", &num);
    printf("The multiplication table of %d is as following : \n", num);
    while (i<=10)
    {
        printf("%d x %d = %d\n",num,i,num*i);
        i = i + 1;
    }
    printf("Thanks for visiting\n");
    printf("Hope you visit again\n\a");
    getch();
    return 0; 
}
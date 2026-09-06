#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter the number you want the multiplication table of and Enter the number from where you want the multiplication table of : \n");
    // printf("Enter the number from where you want the multiplication table of %d : \n", a);
    scanf("%d %d",&a,&b);
    printf("\nThe multiplication table of %d from %d is as follow : \n", a, b);
    for ( c = 0; c < b+1; c++)
    {
        printf("%d X %d = %d\n", a, c, a*c);    
    }
    printf("\nPress any key to exit\n");
    getch();
    return 0;
}
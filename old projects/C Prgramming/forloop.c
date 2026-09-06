#include <stdio.h>
#include <conio.h>

int main()
{
    int num;
    int i;
    char exit;
    int a;
    do
    {
        printf("Enter the number you want the multiplication table of : \n");
        scanf("%d", &num);
        printf("The multiplication table of %d is as following : \n", num);

    for ( i=0;i <= 10; i++)
    {
        printf("%d x %d = %d\n",num,i,num*i);  
    }
        printf("\nPress \"0\" key if you want the multiplication table of another number or Press \"1 or greater than 1\" key to exit the program.\n");
        scanf("%d", &a);
    
    } while (a<1);
    return 0; 
}
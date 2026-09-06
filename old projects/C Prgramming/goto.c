#include <stdio.h>
#include <conio.h>

int main()
{
    int num;
    int i;
    char a;
    label :
    printf("\nEnter the number you want the multiplication table of : \n");
        scanf("%d", &num);
        printf("The multiplication table of %d is as following : \n", num);

    for ( i=0;i <= 10; i++)
    {
        printf("%d x %d = %d\n",num,i,num*i);  
    }
    label1:
    printf("\nPress \"R\" key if you want the multiplication table of another number or Press \"E\" key to exit the program.\n");
        scanf(" %c", &a);
        if (a=='e')
        {
            printf("\nYou are exit from the program\n");
            goto end;
        }
        else if (a=='r')
        {
            goto label;
        }
        else if (a=='R')
        {
            goto label;
        }
        else if (a=='E')
        {
            printf("\nYou are exit from the program\n");
            goto end;
        }
        
        else
        {
            printf("\nYou entered wrong value!\n");
            goto label1;

        }
        end:
        return 0;
}
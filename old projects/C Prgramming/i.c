#include<stdio.h>
#include<conio.h>
int main()
{
    for (int i=0,age;i < 10; i++)
    {
        printf("%d Enter your age :- ", i);
        scanf("%d", &age);
        if (age>=10)
        {
            break;
        }

        printf("Nikhil is a good boy.\n");        
        printf("Nikhil is a good boy.\n");        
        printf("Nikhil is a good boy.\n");        
        printf("Nikhil is a good boy.\n");        
        printf("Nikhil is a good boy.\n");
        continue;       
    }
    
    // getch();
    return 0;
}
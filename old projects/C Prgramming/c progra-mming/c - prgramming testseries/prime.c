#include <stdio.h>
#include <conio.h>

int main()
{
    int n;
    printf("\nEnter a number which you want to check whether it is a prime number or a composite number.\n");
    printf("Enter here : ");
    scanf("%d", &n); 
    int iscomposite = 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            iscomposite = 1;
        }
    }
    if (iscomposite)
    {
        printf("\nThe number %d which you have entered is a composite number.\n\n", n);
    }
    else
    {
        printf("\nThe number %d which you have entered is a prime number.\n\n", n);
    }
    
    
    return 0;
}
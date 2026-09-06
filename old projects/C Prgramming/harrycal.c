#include <stdio.h>
#include <conio.h>
int main()
{
    float num1;
    float num2;
    char op;
    float result;

    printf("Enter the first number :\n");
    scanf("%f", &num1);

    printf("Enter the operation :\n");
    scanf(" %c", &op);

    printf("Enter the second number :\n");
    scanf("%f", &num2);

    if (op == '+')
    {   result = num1+num2;
        printf("\nYour result is : %.2f\n\n",result);
        printf("Thanks for visiting\n");
        printf("Hope you visit again\n");
    }
    else if (op == '-')
    {
        result = num1-num2;
        printf("\nYour result is : %.2f\n\n",result);
        printf("Thanks for visiting\n");
        printf("Hope you visit again\n");
    }
    else if (op == '*')
    {
        result = num1*num2;
        printf("\nYour result is : %.2f\n\n",result);
        printf("Thanks for visiting\n");
        printf("Hope you visit again\n");
    }
    else if (op == '/')
    {
        result = num1/num2;
        printf("\nYour result is : %.2f\n\n",result);
        printf("Thanks for visiting\n");
        printf("Hope you visit again\n");
    }
    else
    {
        printf("\nThe operator is not valid\n");
        printf("Please try again\n\a");
    }
    getch();
    return 0;
}
    
    
    
    
    
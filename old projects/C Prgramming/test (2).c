#include <stdio.h>
#include <conio.h>
int main()
{
    char num,aloo;
    float b;
label:
    printf("\nPress 'a' to convert km to miles.\n");
    printf("Press 'b' to convert inches to foot.\n");
    printf("Press 'c' to convert cm to inches.\n");
    printf("Press 'd' to convert pound to kg.\n");
    printf("Press 'e' to convert inches to meters.\n");
    printf("Enter : ");
    scanf(" %c", &num);
    switch (num)
    {
    case 'a':
        printf("\nEnter km : ");
        scanf("%f", &b);
        printf("%.2f km = %f miles", b, b * 0.621371);
        break;
    case 'b':
        printf("\nEnter inches : ");
        scanf("%f", &b);
        printf("%.2f km = %f foot", b, b * 0.0833333);

        break;
    case 'c':
        printf("\nEnter cm : ");
        scanf("%f", &b);
        printf("%.2f km = %f inches", b, b * 0.393701);

        break;
    case 'd':
        printf("\nEnter pound : ");
        scanf("%f", &b);
        printf("%.2f km = %f kg", b, b * 0.453592);

        break;
    case 'e':
        printf("\nEnter inches : ");
        scanf("%f", &b);
        printf("%.2f km = %f meters", b, b * 0.0254);

        break;
    default:
        printf("\nyou entered a wrong value.\n");
        printf("please try again.\n");
        goto end;
        break;
    }
    printf("\n\nThanks for using.\n");
end:
    printf("\nPress 'r' or 'R' if you want to reuse the program or Press any other key to exit.\n");
    printf("\nEnter : ");
    scanf(" %c", &aloo);
    if (aloo == 'r'|| aloo == 'R')
    {
        goto label;
    }
    return 0;
}
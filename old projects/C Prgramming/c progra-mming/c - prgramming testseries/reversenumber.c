#include <stdio.h>
// #include <conio.h>

int reverse(int num)
{
    int rev = 0, rem;
    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    return rev;
}
int main()
{
    // int num, i = 0;
    // int result[10];
    // printf("Enter a number : ");
    // scanf("%d", &num);
    // printf("The reverse of the number you entered is : ");
    // while (num != 0)
    // {
    //     result[i] = num - (num / 10) * 10;
    //     num = (num / 10);
    //     printf("%d", result[i]);
    //     i++;
    // }
    // printf("\n\nThe total no of digits in the integer you enter is : %d", i);
    int num;
    printf("\nEnter a number which you want to reverse : ");
    scanf("%d", &num);
    printf("The reverse of the number you entered is : %d\n", reverse(num));
    return 0;
}
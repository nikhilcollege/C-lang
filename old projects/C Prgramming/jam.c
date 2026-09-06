#include <stdio.h>

void printstar(int n);
void func1();
// void func(){
//     int n;
//     printf("Enter the number , how many stars you have to print on screen :- ");
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         printf("%c", '*');
//     }
    
// }
// void func6()
// {
//     printf("\n1hello guys please like and subscribe.\n\n");
// }
// void func3()
// {
//     printf("\nNamate.\n\n");
// }
// void func4()
// {
//     printf("\nHI.\n\n");
// }
// void func5()
// {
//     printf("\nhlo.\n\n");
// }
// int func1(int a, int b){
//         return a+b;
// }
// int takenumber(){
//     int i;
//     printf("Enter a number :- ");
//     scanf("%d", &i);
//     return i;
// }
int main()
{
    printstar(37);
    func1();
    printstar(37);
    // func();
    // func2();
    // func3();
    // func4();
    // func5();
    // func6();
    // int n;
    // int i,c;
    // int a,b,c;
    // a=1;
    // b=2;
    // c=func1(a,b);
    // printf("Enter the number , how many stars you have to print on screen :- ");
    // scanf("%d", &n);
    // printstar(n);
    // printf("%d\n", c);
    // c=takenumber();
    // printf("The number is :- %d", c);

    return 0;
}
void printstar(int n){
    for (int i = 1,j=1; i <= n; i++,j++)
    {
        printf("%c", '*');
    }

}
void func1()
{
    printf("\n\nhello guys please like and subscribe.\n\n");
}
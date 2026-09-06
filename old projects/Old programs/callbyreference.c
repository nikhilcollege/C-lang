#include <stdio.h>
#include <conio.h>

void func1(int *a, int *b)
{
    *a = *a + *b;
    *b = (*a - *b) - *b;
}
int main()
{
    int a, b;
    printf("\nEnter first no. : ");
    scanf("%d", &a);
    printf("Enter second no. : ");
    scanf("%d", &b);
    func1(&a, &b);
    printf("\nThe sum of both no. is : %d\n", a);
    printf("The difference of both no. is : %d", b);
    return 0;
}
// void swap(int *x, int *y)
// {
// int temp;
//  temp=*x;
// *x=*y;
// *y=temp;
// return;
// }
// void main()
// { 
// int r=10, v=20; 
// swap(&r, &v);  // passing value to function
// printf("\nValue of r: %d",r);
// printf("\nValue of v: %d",v);
// }
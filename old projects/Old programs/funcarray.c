#include <stdio.h>
#include <conio.h>

void func1(int array[])
{
    for (int i = 0; i < 10; i++)
    {
        printf("The value at index %d is %d\n", i, array[i]);
    }
    // array[9] = 57;
}
void func2(int *terayaar)
{
    for (int i = 0; i < 10; i++)
    {
        printf("The value at index %d is %d\n", i, terayaar[i]);
    }
    *(terayaar + 9) = 57;
}
int main()
{
    int arr[10] = {12, 11, 13, 14, 15, 45, 43, 34, 67, 54};
    // func1(arr);
    func2(arr);
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        printf("The value at index %d is %d\n", i, arr[i]);
    }
    return 0;
}
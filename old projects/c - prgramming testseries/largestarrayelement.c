#include <stdio.h>
#include <conio.h>
int max = 0, index1 = 0;
int n = 9; /*size of array*/
void ptlargest(int arr[])
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            index1 = i;
        }
    }
}
int main()
{
    int array[] = {1, 2, 3, 4, 5, 666, 667, 88, 9, 20};
    ptlargest(array);
    printf("The largest number of array is %d which is at %d index number.\n", max, index1);
    return 0;
}
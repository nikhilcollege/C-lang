#include <stdio.h>
#include <conio.h>

void arrayrevese(int arr[])
{
    int brr;
    for (int i = 0 , j = 6; i < 3; i++ , j--)
    {
        brr = arr[i];
        arr[i] = arr[j];
        arr[j] = brr;
    }
    
}
void arrayprint(int arr[])
{
    for (int i = 0; i < 7; i++)
    {
        printf("The value of element %d is %d.\n", i, arr[i]);
    }
    
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 67};
    printf("\nThe array before revese is :\n\n");
    arrayprint(arr);
    printf("\n\nThe array after revese is :\n\n");
    arrayrevese(arr);
    arrayprint(arr);
    printf("\n");
    return 0;
}
#include <stdio.h>
#include <conio.h>
int main()
{
    // int a;
    // printf("Enter the value :- ");
    // scanf("%d", 6422216);
    // int *ptra = &a;
    // printf("The value of pointer is %d\n", a);
    // printf("The value of pointer is %d\n", *ptra);
    // printf("The value of pointer is %d\n", ptra);
    // printf("The value of pointer is %d\n", &a);
    // printf("The value of pointer is %x\n", &a);
    // printf("The value of pointer is %p\n", &a);
    // printf("%d\n", ptra);
    // printf("%d\n", ptra+1);
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    printf("the first element of array is : %d\n", *arr);
    printf("the first element of array is : %d\n", arr[0]);
    printf("the first element of array is : %d\n", *arr + 1);
    printf("the second element of array is : %d\n", arr[1]);
    printf("the third element of array is : %d\n", arr[2]);
    printf("the fourth element of array is : %d\n", arr[3]);
    printf("*********************************************\n");
    printf("the address of first element of array is  :  %d\n", arr);
    printf("the address of first element of array is  :  %d\n", &arr[0]);
    printf("the address of first element of array is  :  %d\n", arr + 1);
    printf("the address of second element of array is :  %d\n", &arr[1]);
    printf("the address of third element of array is  :  %d\n", &arr[2]);
    printf("the address of fourth element of array is :  %d\n", &arr[3]);
    printf("*********************************************\n");
    printf("the address of first element of array is  :  %d\n", *(arr));
    printf("the address of first element of array is  :  %d\n", *(&arr[0]));
    printf("the address of first element of array is  :  %d\n", *(arr + 1));
    printf("the address of second element of array is :  %d\n", *(&arr[1]));
    printf("the address of third element of array is  :  %d\n", *(&arr[2]));
    printf("the address of fourth element of array is :  %d\n", *(&arr[3]));

    return 0;

}
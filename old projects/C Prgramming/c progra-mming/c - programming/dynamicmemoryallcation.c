#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr,n;
    ptr = (int *)malloc(n * sizeof(int));
    printf("Enter the size of the array you want to create :\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this array\n",i);
        scanf("%d", &ptr[i]);
    }
    free(ptr);
    return 0;
}
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int r1,r2,c1,c2;
    printf("\n\n\t\t\t\t*************** Matrix Multiplication Program ***************\n\n\n");
    printf("Enter how many rows are there in first matrix : ");
    scanf("%d",r1);
    printf("\nEnter how many columms are there in first matrix : ");
    scanf("%d",c1);
    printf("\nEnter how many rows are there in second matrix : ");
    scanf("%d",r2);
    printf("\nEnter how many columms are there in second matrix : ");
    scanf("%d",c2);
    int *ptr;
    ptr = (int *)malloc((r1*c1)*sizeof(int));
    return 0;
}
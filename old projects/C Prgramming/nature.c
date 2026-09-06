// #include<stdio.h>
// int main()
// {
//  int n1=0,n2=1,n3,i,number;
//  printf("Enter the number of elements:");
//  scanf("%d",&number);
//  printf("\n%d %d",n1,n2);//printing 0 and 1
//  for(i=2;i<number;++i)//loop starts from 2 because 0 and 1 are already printed
//  {
//   n3=n1+n2;
//   printf(" %d",n3);
//   n1=n2;
//   n2=n3;
//  }
//   return 0;
//  }
// #include<stdio.h>
// void printFibonacci(int n){
//     static int n1=0,n2=1,n3;
//     if(n>0){
//          n3 = n1 + n2;
//          n1 = n2;
//          n2 = n3;
//          printf("%d ",n3);
//          printFibonacci(n-1);
//     }
// }
// int main(){
//     int n;
//     printf("Enter the number of elements: ");
//     scanf("%d",&n);
//     printf("Fibonacci Series: ");
//     printf("%d %d ",0,1);
//     printFibonacci(n-2);//n-2 because 2 numbers are already printed
//   return 0;
// }
#include <stdio.h>
#include <conio.h>
void fabonacci(int num)
{
  static int a = 0, b = 1, c;
  if (num>0)
  {
    c = a + b;
    a=b;
    b=c;
    printf("%d ", c);
    fabonacci(num-1);
  }
  
}
int main()
{
  int num;
  printf("Enter the number of elements :- ");
  scanf("%d", &num);
  printf("Fibonacci series :\n");
  printf("0 1 ");
  fabonacci(num - 2);
  return 0;
}
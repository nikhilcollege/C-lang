#include <stdio.h>
#include <conio.h>

typedef struct mystructure
{
    int a;
}nikhil ;
typedef struct mystructure makdoomi; 

int main()
{
    // typedef int i;
    // i l1,l2,l3;
    // int e;
    // printf("enter a number. ");
    // scanf("%d", &l1);
    // printf("the no you entered is %d\n", l1);
    // typedef char chotu;
    // char a,b,c;
    // chotu d,f,j;
    typedef char myarray[50];
    typedef myarray vurtre;
    vurtre hlo = {"hello mera namm haa shaka laka bum bum "};
    puts(hlo);
    struct mystructure e2;
    e2.a = 44;
    printf("%d\n", e2.a);
    nikhil e5;
    e5.a = 45;
    printf("%d\n", e5.a);
    typedef nikhil mystr;
    mystr ts;
    ts.a = 54;
    printf("%d\n", ts.a);
    makdoomi re;
    re.a = 543;
    printf("%d\n", re.a);
    typedef int* ptr;
    ptr a, b, c;
    return 0;
}
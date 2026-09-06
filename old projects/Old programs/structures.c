// #include <stdio.h>
// #include <conio.h>
// #include <string.h>

// struct student
// {
//     int id;
//     char name[15];
//     int tmarks;
//     float science;
//     float maths;
//     float reasoning;
// };
// void info(int s)
// {
//     struct student st1, st2, st3;
//     st1.id = 4531;
//     st2.id = 4532;
//     st3.id = 4533;
//     strcpy(st1.name, "Harry");
//     strcpy(st2.name, "Shubam");
//     strcpy(st3.name, "Ravi");
//     st1.tmarks = 455;
//     st2.tmarks = 399;
//     st3.tmarks = 500;
//     st1.science = 155.67;
//     st2.science = 133.00;
//     st3.science = 166.67;
//     st1.maths = 155.67;
//     st2.maths = 133.00;
//     st3.maths = 166.67;
//     st1.reasoning = 155.67;
//     st2.reasoning = 133.00;
//     st3.reasoning = 166.67;
//     switch (s)
//     {
//     case 4531:
//         printf("\nStudent name : %s\n", st1.name);
//         printf("Student ID : %d\n", st1.id);
//         printf("Total Marks out of 500 : %d\n", st1.tmarks);
//         printf("Marks from maths portion : %.2f\n", st1.maths);
//         printf("Marks from science portion : %.2f\n", st1.science);
//         printf("Marks from Reasoning portion : %.2f\n\n", st1.reasoning);
//         break;
//     case 4532:
//         printf("\nStudent name : %s\n", st2.name);
//         printf("Student ID : %d\n", st2.id);
//         printf("Total Marks out of 500 : %d\n", st2.tmarks);
//         printf("Marks from maths portion : %.2f\n", st2.maths);
//         printf("Marks from science portion : %.2f\n", st2.science);
//         printf("Marks from Reasoning portion : %.2f\n\n", st2.reasoning);
//         break;
//     case 4533:
//         printf("\nStudent name : %s\n", st3.name);
//         printf("Student ID : %d\n", st3.id);
//         printf("Total Marks out of 500 : %d\n", st3.tmarks);
//         printf("Marks from maths portion : %.2f\n", st3.maths);
//         printf("Marks from science portion : %.2f\n", st3.science);
//         printf("Marks from Reasoning portion : %.2f\n\n", st3.reasoning);
//         break;
//     default:
//         printf("\nYou entered a wrong value!\n");
//         break;
//     }
// }
// int main()
// {
//     int s;
//     printf("\n**** Welcome To The App of National Nikhil's institute of Science and Tecnology ****\n\n");
//     printf("Enter student's ID to check the result of scolarship test of class XI.\n\n");
//     printf("Enter Here : ");
//     scanf("%d", &s);
//     info(s);
//     return 0;
// }
// #include <stdio.h>
// struct book {
// char title[20];
// char Author_name[100];
// float price;
// int pages;
// } ;
// int main( ) {
// struct book book1 = { "Cprogramming", "ABC", 150.00, 550 } ;
// printf ( "\n Title = %s", book1.title ) ;
// printf ( "\n Name = %s", book1.Author_name ) ;
// printf ( "\n Price = %.2f",book1.price ) ;
// printf ( "\n Pages = %d", book1.pages ) ;
// return 0;}
// #include <stdio.h>
// #include <conio.h>
// struct Foo
// {
//     char a;
//     int b;
//     double c;
// };
//     struct Foo foo2 = {'g', 55, 47.85748};
//     struct Foo foo1;

// void foo_assign(void)
// {
//     foo1 = foo2;
// }

// int main(/*char *argv[],int argc*/)
// {
//     foo_assign();
//     printf("%c\n", foo2.a);
//     printf("%d\n", foo2.b);
//     printf("%lf\n", foo2.c);
//     printf("%c\n", foo1.a);
//     printf("%d\n", foo1.b);
//     printf("%lf\n", foo1.c);
//     return 0;
// }
#include <stdio.h>
#include <string.h>

struct Garden
{
    int num_animals;
    int size;
    char an_type[10];
};

void Input(struct Garden *gardname)
{
    printf("\nEnter number of animals\n");
    scanf("%d", &gardname->num_animals);

    printf("\nEnter size\n");
    scanf("%d", &gardname->size);

    printf("\nEnter type\n");
    scanf("%s", gardname->an_type);
}

void Output(struct Garden *gardname)
{
    printf("Num of animals:%d\n",gardname->num_animals);
    printf("size:%d\n",gardname->size);
    printf("type:%s\n",gardname->an_type);
}

int main()
{
    struct Garden Lumbini;
    Input(&Lumbini);
    Output(&Lumbini);

    return 0;
}
// #include <stdio.h>
// #include <string.h>

// struct Garden
// {
//     char type[10];
//     int num_animals;
//     int size;
// };
// struct Garden Lumbini;

// void Input()
// {
//     printf("\nEnter type\n");
//     gets(Lumbini.type);
    
//     printf("\nEnter number of animals\n");
//     scanf("%d", &Lumbini.num_animals);

//     printf("\nEnter size\n");
//     scanf("%d", &Lumbini.size);
    
// }

// void Output()
// {
//     printf("\n\nNum of animals:%d\n", Lumbini.num_animals);
//     printf("size:%d\n", Lumbini.size);
//     printf("type:%s\n", Lumbini.type);
// }

// int main()
// {
//     Input();
//     Output();

//     return 0;
// }
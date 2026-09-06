// #include <stdio.h>
// int main(void) 
// {
//    int x = printf("GeeksQuiz");
//    printf("%d", x);
//    return 0;
// }
// #include <stdio.h>
// int foo(int* a, int* b)
// {
//     int sum = *a + *b;
//     *b = *a;
//     return *a = sum - *b;
// }
// int main()
// {
//     int i = 0, j = 1, k = 2, l;
//     l = i++ || foo(&j, &k);
//     printf("%d %d %d %d", i, j, k, l);
//     return 0;
// // }
// #include <stdio.h>

// int main()
// {
//    int a = 1;
//    int b = 1;
//    int c = a || --b;
//    int d = a-- && --b;
//    printf("a = %d, b = %d, c = %d, d = %d", a, b, c, d);
//    return 0;
// }
#include <stdio.h>
int main ()
{
        int i, j;
        int a [8] = {1, 2, 3, 4, 5, 6, 7, 8};
        for(i = 0; i < 3; i++) {
             a[i] = a[i] + 1;
             i++;
        }
        i--;
        for (j = 7; j > 4; j--) {
              int i = j/2;
              a[i] = a[i] - 1;
        }
        printf ("%d, %d", i, a[i]);
}

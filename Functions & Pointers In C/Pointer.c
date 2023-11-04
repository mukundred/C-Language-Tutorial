#include <stdio.h>
int main()
{
    int a = 5;
    int *x = &a;
    /*
    This is Valid
    int* x;
    x = &a;

    (*x Never !!)

    */

    /*

    if you use
    *x = 7;
    the value of a will change from 5 to 7 !!

    */
    //%p used to print address

    printf("%p\n", x);  // Address of a
    printf("%p\n", &x); // Address of pointer
    printf("%d\n", *x); // Value of a
    return 0;
}
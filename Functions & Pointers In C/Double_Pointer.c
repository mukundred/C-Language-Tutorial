#include<stdio.h>
int main()
{
int a = 5;
int* x = &a; // int* -> int ka address store hota hai
// VVIP --> *x = 7; a is changed to 7
int** y = &x; // int** -> int* ka address store hota hai
printf("%p\n", &x);
printf("%p\n", y);
// *x will print 5
// **y will print 5 also 
// The same way we can create many pointers(Double, Triple, etc.)
return 0;
}
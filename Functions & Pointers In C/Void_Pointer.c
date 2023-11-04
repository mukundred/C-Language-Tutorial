#include<stdio.h>
// Void Pointer Have No Associated Type
// Both way convertible to any type
int main()
{
int x = 10;
void *p1= &x;
int *p2=p1;
char y ='G';
char*p3=&y;
p1=p3;
// Can't be dereferenced
int z = 23;
void *ptr= &z;
printf("%d", *ptr); // Compiler error
printf("%d", *(int *)ptr); // Compiler
// As you are declaring the Type

return 0;
}
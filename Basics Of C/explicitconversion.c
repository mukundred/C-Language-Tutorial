#include<stdio.h>
int main()
{
int x = 9, y = 3.3;
double c = (double)x*y; //Here if double is not written in bracket we will get 27 as answer, because of order of presedence.

printf("%ld", c);

return 0;
}
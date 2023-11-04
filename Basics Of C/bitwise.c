#include<stdio.h>
int main()
{
int x = 3, y =6;
printf("%d\n", x & y); // Bitwise AND
printf("%d\n", x | y); // Bitwise OR
printf("%d\n", x^y); // Bitwise XOR
printf("%d\n", x<<1); // Left Shift Operator
printf("%d\n", x<<2); // Left Shift Operator
printf("%d\n", x << y); // Left Shift Operator

// Right SHift is in NOTES
return 0;
}
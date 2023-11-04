#include <stdio.h>
// Dry Ruun for a better Understanding !!
int factorial(int n)
{
    if (n == 1 || n == 0)
        return 1;
    return n * factorial(n - 1); // Function Calling Itself
}
int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);
    int fact = factorial(n);
    printf("%d! = %d", n, fact);
    return 0;
}
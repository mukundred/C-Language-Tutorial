#include <stdio.h>
int firstDigit(int n)
{
    while (n > 10)
    {
        n /= 10;
    }
    return n;
}
int main()
{
    int n;
    scanf("%d", &n);
    int dig = firstDigit(n);
    printf("%d", dig);
    return 0;
}
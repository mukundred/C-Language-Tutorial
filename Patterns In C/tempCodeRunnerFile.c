#include <stdio.h>
int factorial(int x)
{
    int fact;
    for (int i = 1; i <= x; i++)
    {
        fact *= i;
    }
    return fact;
}

int combination(int n, int r)
{
    int nCr = factorial(n) / (factorial(r) * factorial(n - r));
    return nCr;
}
int main()
{
    int n;
    printf("Enter Number of rows : ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            int iCj = combination(i, j);
            printf("%d", iCj);
        }
        printf("\n");
    }
    return 0;
}
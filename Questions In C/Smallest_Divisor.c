#include <stdio.h>
int main()
{
    int n;
    printf("Enter N : ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("Smallest Divisor is %d", i);
            break;
        }
    }

    return 0;
}
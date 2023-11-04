#include <stdio.h>
int main()
{
    // Programme to find the Numbers which are not multiple of a number given by user
    int n, x;
    printf("Enter n and x : ");
    scanf("%d %d", &n, &x);
    for (int i = 1; i <= n; i++)
    {
        if (i % x == 0)
        {
            continue; // Skip the current iteration if i is a multiple of x
        }
        printf("%d ", i); // Print i if it's not a multiple of x
    }
    return 0;
}

/*

    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *

*/

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    // Upper Half
    for (int i = 1; i <= n; i++)
    {
        for (int space = 1; space <= n - i; space++)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    // Lower Half
    for (int x = n - 1; x >= 1; x--)
    {
        for (int y = 1; y <= (n - x); y++)
        {
            printf(" ");
        }
        for (int a = 1; a <= 2 * x - 1; a++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
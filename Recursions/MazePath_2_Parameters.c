#include <stdio.h>
int maze2(int n, int m)
{
    int rightWays = 0;
    int downWays = 0;
    if (n == 1 && m == 1)
        return 1;
    if (n == 1)
    {
        rightWays += maze2(n, m - 1);
    }
    if (m == 1)
    {
        downWays += maze2(n - 1, m);
    }
    if (n > 1 && m > 1)
    {
        rightWays += maze2(n, m - 1);
        downWays += maze2(n - 1, m);
    }
    int totalWays = rightWays + downWays;
    return totalWays;
}
int main()
{
    int a, b;
    printf("Enter no. of rows : ");
    scanf("%d", &a);
    printf("Enter no. of coloumn : ");
    scanf("%d", &b);
    int no0ways = maze2(a, b);

    printf("%d", no0ways);
    return 0;
}
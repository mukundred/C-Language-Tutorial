#include <stdio.h>
int main()
{
    int n;
    printf("Enter The Number : ");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("Number Is Even !!");
    }
    else
    {

        printf("Number Is Odd !!");
    }

    return 0;
}
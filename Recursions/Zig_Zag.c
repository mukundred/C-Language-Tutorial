#include <stdio.h>

void zigzag(int n)
{
    if (n == 0)
        return;
    printf("Pre %d", n);
    zigzag(n - 1);

    printf("In %d", n);
    zigzag(n - 1);
    printf("Post %d", n);
    zigzag(n - 1);
    return;
}
int main()
{
    int n;
    printf("Enter Number : ");
    scanf("%d", &n);

    zigzag(n);

    return 0;
}
#include <stdio.h>
// Dry Run For a better Understanding of Call Stack
void preInpost(int n)
{
    if (n == 0)
        return;
    printf("Pre %d\n", n);
    preInpost(n - 1);
    printf("In %d\n", n);
    preInpost(n - 1);
    printf("Post %d\n", n);

    return;
}
int main()
{
    int n;
    printf("Enter Number : ");
    scanf("%d", &n);

    preInpost(n);

    return 0;
}
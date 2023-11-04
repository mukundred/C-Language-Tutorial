#include <stdio.h>
int main()
{
    int n;
    printf("Enter the Number : ");
    scanf("%d", &n);
    int rem = n % 10;

    printf("Last Digit is : %d", rem);
    return 0;
}
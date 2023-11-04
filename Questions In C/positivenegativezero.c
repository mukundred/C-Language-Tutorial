// This Programme is to chech whethet the given number is Positive, Negative, Or Zero
#include <stdio.h>
int main()
{
    int n;
    printf("Enter The Number : ");
    scanf("%d", &n);

    if (n > 0)
    {
        printf("Number is Positive !!");
    }

    else if (n < 0)
    {
        printf("Number is Negative !!");
    }

    else
    {
        printf("Zero");
    }

    return 0;
}
// The Only problem is that it gives the value of A,a and cosider them as integer
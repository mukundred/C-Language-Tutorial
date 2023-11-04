// The Programme is to find wheteher the number is positive,negative, even or odd

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the Number : ");
    scanf("%d", &n);
    if ((n % 2 == 0) && n > 0)
    {
        printf("Number is Positive & Even");
    }

    else if ((n % 2 == 0) && n < 0)
    {

        printf("Number is Negative & Even");
    }

    else if ((n % 2 != 0) && n > 0)
    {
        printf("Number is Positive & Odd");
    }

    else if ((n % 2 != 0) && n < 0)
    {

        printf("Number is Negative & Odd");
    }
    else
    {
        printf("Number Is Zero 0");
    }
    
    return 0;
}
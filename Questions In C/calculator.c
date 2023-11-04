#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter Your choice (+,-,*,/): "); // Asking For Input
    char a;
    scanf("%c", &a);
    switch (a)
    {
    case '+': // For Addition

        printf("Enter First Number : ");
        scanf("%d", &x);
        printf("Enter Second Number : ");
        scanf("%d", &y);
        printf("%d + %d = %d", x, y, x + y);
        break;

    case '-': // For Substraction

        printf("Enter First Number : ");
        scanf("%d", &x);
        printf("Enter Second Number : ");
        scanf("%d", &y);
        printf("%d - %d = %d", x, y, x - y);
        break;
    case '*': // For Multiplication

        printf("Enter First Number : ");
        scanf("%d", &x);
        printf("Enter Second Number : ");
        scanf("%d", &y);
        printf("%d * %d = %d", x, y, x * y);
        break;

    case '/': // For Divisions

        printf("Enter First Number : ");
        scanf("%d", &x);
        printf("Enter Second Number : ");
        scanf("%d", &y);
        printf("%d / %d = %d", x, y, x / y);
        break;
    default:
        printf("Enter A Valid Input");
        break;
    }
    return 0;
}
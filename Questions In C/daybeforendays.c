#include <stdio.h>
int main()
{
    int n, d;
    /*
    0 Sunday
    1 Monday
    2 Tuesday
    3 Wednesday
    4 Thursday
    5 Friday
    6 Saturday
    */

    // CONVERT RANGE 0 TO 6 by Taking MODULER n%7.
    // Subtract That Value by d
    printf("Enter The Day : ");
    scanf("%d", &n);
    printf("Enter Day : ");
    scanf("%d", &d);

    int mod_res = n % 7;
    int sub_res = d - mod_res;

    if (sub_res >= 0) // if this than print
    {
        printf("%d", sub_res);
    }
    else // else add 7 and then print
    {
        sub_res = sub_res + 7;
        printf("%d", sub_res);
    }
    return 0;
}
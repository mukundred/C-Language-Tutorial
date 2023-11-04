#include<string.h>
#include<stdio.h>

typedef struct date{
    int date;
    int month;
    int year;

}date;

int main()
{
    date d1,d2;
    printf("First Date : ");
    scanf("%d", &d1.date);

    printf("First Month : ");
    scanf("%d", &d1.month);

    printf("First Year : ");
    scanf("%d", &d1.year);

    printf("Second Date : ");
    scanf("%d", &d2.date);

    printf("Second Month : ");
    scanf("%d", &d2.month);

    printf("Second Year : ");
    scanf("%d", &d2.year);



    if(d1.date == d2.date && d1.month == d2.month && d1.year == d2.year)
    {
        printf("Equal");
    } 
    else 
    {
        printf("Unequal");
    }
return 0;
}
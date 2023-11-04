#include <stdio.h>
#include <string.h>

struct Person
{
    char name[100];
    int age;
    float salary;
} P1;

int main()
{
    printf("Enter Your Name : ");
    gets(P1.name);
    printf("Enter Your Age : ");
    scanf("%d", &P1.age);
    printf("Enter your Salary : ");
    scanf("%f", &P1.salary);
    printf("--------------------------\n");
    printf("Check Details !!\n");
    printf("Name : %s\n", P1.name);
    printf("Age : %d\n", P1.age);
    printf("Salary : %.2f\n", P1.salary);
    return 0;
}
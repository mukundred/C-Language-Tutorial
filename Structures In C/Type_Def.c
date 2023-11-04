#include<stdio.h>
#include<string.h>
typedef struct Person
{
    char name[100];
    int age;
    float salary;
}P1; // We will not be required to write struct Person, instead we can only write
// P1 to declare the name of person
int main()
{
P1 r;
r.age = 12;
strcpy(r.name, "Mukund");
r.salary = 123;
return 0;
}
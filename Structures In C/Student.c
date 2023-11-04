#include<stdio.h>
#include<string.h>
typedef struct Student{
    int roll_number;
    char name[100];
    char department[100];
    char course[500];
    int year;
}Student;

void departmentCheck(Student a,Student b){
    if(a.department!=b.department){
        printf("Same Department");
    }
    else{
        printf("Different Department");
    }
}
int main()
{
    Student a;
    Student b;
    a.roll_number = 123;
    a.year = 2023;
    strcpy(a.course,"ECE");
    strcpy(a.department,"BTECH");
    strcpy(a.name,"Mukund");

    b.roll_number = 103;
    b.year = 2023;
    strcpy(b.course,"CSE");
    strcpy(b.department,"BTECH");
    strcpy(b.name,"Dnukum");

    departmentCheck(a,b);
return 0;
}
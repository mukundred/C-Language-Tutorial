#include<stdio.h>
typedef struct person{
    int age;
    float weight;
}person;
int main()
{
    person p1;
    p1.age = 12;
    p1.weight = 78.90;

    person* x = &p1;
    printf("%d\n", *x );
    printf("%.2f\n",(*x).weight );

    (*x).weight = 67.90; // Change value
    printf("%.3f\n", (*x).weight);
return 0;
}
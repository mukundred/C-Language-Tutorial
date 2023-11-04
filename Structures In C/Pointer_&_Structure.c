#include<stdio.h>
#include<string.h>

typedef struct Pokemon // User defined data type
{
    int hp;
    int attack;
    int speed;
    char tier;
    char name[50]; // S,A,B,C,D
}pokemon;

int main()
{
    pokemon pikachu;
    pikachu.hp = 120;
    pikachu.attack = 200;
    pikachu.speed = 123;
    pikachu.tier = 'A';
    pokemon* x = &pikachu; 
    printf("%p\n", &pikachu.hp);
    printf("%p\n", &pikachu.attack);
    printf("%p\n", &pikachu.speed);
    printf("%p\n", &pikachu.tier);
    printf("%p\n", x);
return 0;
}
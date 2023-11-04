#include<stdio.h>
#include<stdio.h>
#include<stdbool.h>
typedef struct pokemon
{
    int hp;
    int speed;
    int attack;
    char tier;
    char name[50];
}pokemon;

typedef struct legendarypokemon{
    // int hp;
    // int speed;
    // int attack;
    // char tier;
    // char name[50];
    pokemon normal;
    char ability[50];
}legendarypokemon;

int main()
{
    legendarypokemon mewto;
    strcpy(mewto.ability,"Pressure");
    mewto.normal.attack = 123;
return 0;
}
#include <stdio.h>
#include <string.h>
struct Pokemon // User defined data type
{
    int hp;
    int speed;
    int attack;
    char tier; // S,A,B,C,D
};

int main()
{
    struct Pokemon charizard;
    charizard.attack = 60;
    charizard.hp = 80;
    charizard.speed = 100;
    charizard.tier = 'S';
    printf("%d %d %d %c", charizard.attack, charizard.hp, charizard.speed, charizard.tier);
    struct Pokemon pikachu;
    pikachu.attack = 56;
    pikachu.hp = 98;
    pikachu.speed = 15000;
    pikachu.tier = 'A';
    printf("\n");
    printf("%d %d %d %c", pikachu.attack, pikachu.hp, pikachu.speed, pikachu.tier);
    return 0;
}
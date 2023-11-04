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
    printf("Enter Charizard's Tier : ");
    scanf("%c", &charizard.tier);
    printf("%d %d %d %c", charizard.attack, charizard.hp, charizard.speed, charizard.tier);

    return 0;
}
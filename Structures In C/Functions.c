#include<stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct pokemon // Global Variable
{
    int hp;
    int speed;
    int attack;
    char tier;
    char name[50];
}pokemon;

void fun(pokemon p){

    printf("%d\n", p.hp);
    
}
void change(pokemon p){
    p.attack =12;
    p.hp = 90;
    strcpy(p.name,"PIKACHU");
}
int main()
{
    // Local Variable
// typedef struct pokemon
// {
//     int hp;
//     int speed;
//     int attack;
//     char tier;
//     char name[50];
// }pokemon;

pokemon pikachu;
pikachu.hp = 60; 
pikachu.attack = 150;
strcpy(pikachu.name,"Pikachu");


fun(pikachu);

change(pikachu);
printf("%d\n", pikachu.hp);
printf("%d\n", pikachu.attack);
printf("%s\n", pikachu.name);
return 0;
}
#include<stdio.h>
#include<string.h>
typedef struct pokemon
{
    int hp;
    int speed;
    int attack;
    char tier;
    char name[50];
}pokemon;

int main()
{
pokemon arr[3];
  arr[0].attack =100;
  arr[0].hp = 89;
  arr[0].speed= 130;
  arr[0].tier='A';
  strcpy(arr[0].name,"Pikachu");

  arr[1].attack =150;
  arr[1].hp = 98;
  arr[1].speed= 830;
  arr[1].tier='S';
  strcpy(arr[1].name,"Charizard");

  arr[2].attack =900;
  arr[2].hp = 909;
  arr[2].speed= 30;
  arr[2].tier='B';
  strcpy(arr[2].name,"Mewto");

  for(int i = 0;i<3;i++){
printf("Name : %s\n", arr[i].name);
printf("Attack : %d\n", arr[i].attack);
printf("HP : %d\n", arr[i].hp);
printf("Speed : %d\n", arr[i].speed);
printf("Tier : %c\n", arr[i].tier);
printf("======================\n");
  }
return 0;
}
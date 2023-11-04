#include<stdio.h>
#include<string.h>
typedef struct Pokemon // User defined data type
{
    int hp;
    int speed;
    int attack;
    char tier;
    char name[50]; // S,A,B,C,D
}pokemon;
int main()
{
 pokemon a,b,c;
 a.attack = 12;
 a.hp=123;
 a.speed=567;
 a.tier='S';
 strcpy(a.name,"Blastoise");

 b=a;// b-> a copy
 b.attack = 200;
 printf("%d\n", b.attack);// Deep copy
 printf("%d\n", a.attack);// Both values are same
return 0;
}
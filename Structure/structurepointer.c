#include <stdio.h>
#include <string.h>
typedef struct pokemon
{
    int hp;
    int speed;
    int attack;
    char tier;
    char name[10];
} pokemon;

int main()
{
    pokemon pikachu;
    pikachu.hp = 60;
    pikachu.speed = 70;
    pikachu.attack= 100;
    pikachu.tier = 'A';
    strcpy(pikachu.name,"Pikachu");
    //int* x --> address of integer vale
    pokemon* x =&pikachu;
    printf("%p\n",&pikachu.hp);
    printf("%p\n",&pikachu.speed);
    printf("%p\n",&pikachu.attack);
    printf("%p\n",&pikachu.tier);
    printf("%p\n",pikachu.name);

    printf("%p\n",x);
    return 0;
}
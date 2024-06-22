#include <stdio.h>
#include <string.h>
typedef union pokemon
{
    int hp;
    int speed;
    int attack;
    char tier;
    char name[30];
} pokemon;

int main()
{

    pokemon pikachu;
    pikachu.attack = 100;
    pikachu.hp = 100;
    pikachu.speed = 90;
    pikachu.tier = 'A';
    strcpy(pikachu.name, "Blastoise");

    printf("%s\n", pikachu.name);
    printf("%d\n", pikachu.attack);
    printf("%d\n", pikachu.hp);
    printf("%d\n", pikachu.speed);
    printf("%c\n", pikachu.tier);
    

    return 0;
}
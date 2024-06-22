#include <stdio.h>
#include <string.h>
typedef struct pokemon
{
    int hp;
    int speed;
    int attack;
    char tier;
    char name[30];
} pokemon;

void fun(pokemon p)
{
    printf("%d\n", p.hp);
    return;
}

void change(pokemon p){
    p.hp = 90;
    p.attack = 119;
    p.speed = 110;
    return ;
}
int main()
{

    pokemon pikachu;
    pikachu.attack = 100;
    pikachu.hp = 100;
    pikachu.speed = 90;
    pikachu.tier = 'B';
    strcpy(pikachu.name, "Blastoise");

    // fun(pikachu);

    change(pikachu);  //Structure are are only Passed by value

    printf("%d\n", pikachu.attack);
    printf("%d\n", pikachu.hp);
    printf("%d\n", pikachu.speed);

    return 0;
}
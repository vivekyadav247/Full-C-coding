#include <stdio.h>
#include <string.h>
int main()
{
    typedef struct pokemon
    {
        int hp;
        int speed;
        int attack;
        char tier;
        char name[30];
    } pokemon;

    pokemon a, b, c;
    a.attack = 100;
    a.hp = 100;
    a.speed = 90;
    a.tier = 'B';
    strcpy(a.name, "Blastoise");

    typedef struct legendpokemon
    {
        pokemon normal;
        char ability[10];

    } legendpokemon;

    legendpokemon mewtwo;
    strcpy(mewtwo.ability, "Pressure");
    mewtwo.normal.hp = 200;
    mewtwo.normal.attack = 180;
    mewtwo.normal.speed = 190;
    mewtwo.normal.tier = 'A';
    strcpy(mewtwo.normal.name, "Mewtwo");

    typedef struct goatpokemon
    {
        legendpokemon legend;
        int specialattack;
    } goatpokemon;

    goatpokemon arceus;
    arceus.specialattack = 300;
    strcpy(arceus.legend.ability, "Turn Anyone to Stone");
    arceus.legend.normal.hp = 200;
    arceus.legend.normal.attack = 250;
    arceus.legend.normal.speed = 350;
    arceus.legend.normal.tier = 'A';
    strcpy(arceus.legend.normal.name, "Arceus");

    return 0;
}
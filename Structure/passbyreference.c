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

void change(pokemon* p)
{
    // first way 
    // (*p).hp = 90;
    // (*p).attack = 119;
    // (*p).speed = 110;
    // strcpy((*p).name,"Pikachu");
    // (*p).tier = 'S';

    // another way 

    p->hp = 90;
    p->attack = 119;
    p->speed = 110;
    strcpy(p->name,"Pikachu");
    p->tier = 'S';

    
    return;
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
    printf("%s\n", pikachu.name);
    printf("%d\n", pikachu.attack);
    printf("%d\n", pikachu.hp);
    printf("%d\n", pikachu.speed);
    printf("%c\n", pikachu.tier);

 

    change(&pikachu) ;// Structure are are only Passed by value

    printf("%s\n", pikachu.name);
    printf("%d\n", pikachu.attack);
    printf("%d\n", pikachu.hp);
    printf("%d\n", pikachu.speed);
    printf("%c\n", pikachu.tier);

    return 0;
}
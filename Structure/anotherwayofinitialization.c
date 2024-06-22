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

void change (pokemon* p){
    p->hp = 90;
    p->attack = 119;
    p->speed = 110;
    strcpy(p->name,"Raichu");
    p->tier = 'S';
    return ;
}
int main (){
    pokemon pikachu = {60,70,100,'A',"Pikachu"};  // All numbers in order of typedef //     
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
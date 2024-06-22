#include<stdio.h>
#include<string.h>
int  main(){
    typedef struct pokemon
    {
        int hp;
        int speed;
        int attack;
        char tier;
        char name[30];
    } pokemon;
    pokemon a,b,c;
    a.attack = 100;
    a.hp = 100;
    a.speed= 90;
    a.tier = 'A';
    strcpy(a.name,"Blastoise");

    // b.attack = a.attack;
    // b.hp = a.hp;
    // b.speed = a.speed;
    // b.tier = a.tier;
    // strcpy(b.name,a.name);
    
    b=a;   //ye structure ka ek feature hai jisse vo a se direct b mein point ho jayega ;
    b.attack = 200; // ye deep copy hota hai 
    printf("%d",b.attack);


    return 0;
}
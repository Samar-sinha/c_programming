#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    typedef struct pokemon {
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    } pokemon;

    typedef struct legendary{
        pokemon normal;
        char ability[15];
    } legendary;

    legendary mewtwo;
    strcpy(mewtwo.normal.name, "Mewtwo");
    mewtwo.normal.attack = 150;
    mewtwo.normal.hp = 200;
    mewtwo.normal.speed = 180;
    mewtwo.normal.tier = 'S';
    strcpy(mewtwo.ability, "Pressure");
    
    return 0;
}
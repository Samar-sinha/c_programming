#include<stdio.h>
#include<string.h>
#include<stdbool.h>
    typedef union pokemon {
        int hp;
        int attack;
        int speed;
        char tier;
        char name[15];
    } pokemon;

int main(){
    pokemon pikachu;
    pikachu.hp = 60;
    pikachu.attack = 80;
    pikachu.speed = 100;
    pikachu.tier = 'A';
    strcpy(pikachu.name, "pikachu");

    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
    printf("%s\n",pikachu.name);
    printf("%d\n",pikachu.speed);
    printf("%c\n",pikachu.tier);
    

    return 0;
}
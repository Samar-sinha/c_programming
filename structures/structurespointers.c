#include<stdio.h>
#include<string.h>
#include<stdbool.h>
    typedef struct pokemon {
        int hp;
        int attack;
        int speed;
        char tier;
        char name[15];
    } pokemon;
void change(pokemon* p){
    // (*p).hp = 70;
    // (*p).attack = 90;
    // (*p).speed = 110;
    // (*p).tier = 'S';
    // strcpy((*p).name, "raichu");
    p->hp =70;
    p->attack = 90;
    p->speed = 110;
    p->tier = 'S';
    strcpy(p->name, "raichu");
    return;
}

int main(){
    pokemon pikachu = {60,80,95,'A',"pikachu"};
    // pikachu.hp = 60;
    // pikachu.attack = 80;
    // pikachu.speed = 100;
    // pikachu.tier = 'A';
    // strcpy(pikachu.name, "pikachu");
    pokemon* x = &pikachu;
    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.speed);
    printf("%c\n",pikachu.tier);
    printf("%s\n",pikachu.name);

    change(&pikachu);
    
    printf("%d\n",x->hp);
    printf("%d\n",x->attack);
    printf("%d\n",(*x).speed);
    printf("%c\n",pikachu.tier);
    printf("%s\n",pikachu.name);

    return 0;
}
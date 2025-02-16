#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon {
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    } pokemon;

    pokemon a, b, c;
    
    strcpy(a.name, "ratata");
    a.attack = 40;
    a.hp = 60;
    a.speed = 70;
    a.tier = 'B';

    b = a; // this means every info from a has been copied to b. this is a feature of structure, means we can directly copy everything
    strcpy(b.name, "pidgey");
    puts(a.name);

    return 0;
}
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

    pokemon arr[3]; 
    arr[0].attack = 80;
    arr[0].hp = 50;
    arr[0].speed = 100;
    arr[0].tier = 'A';
    strcpy(arr[0].name, "pikachu");

    arr[1].attack = 100;
    arr[1].hp = 80;
    arr[1].speed = 80;
    arr[1].tier = 'S';
    strcpy(arr[1].name, "Charizard");

    arr[2].attack = 150;
    arr[2].hp = 120;
    arr[2].speed = 170;
    arr[2].tier = 's';
    strcpy(arr[2].name, "mewtwo");

    for(int i=0; i<3; i++){
        printf("%s\n",arr[i].name);
        printf("ATTACK : %d\n",arr[i].attack);
        printf("HP : %d\n",arr[i].hp);
        printf("SPEED : %d\n",arr[i].speed);
        printf("TIER : %c\n",arr[i].tier);
        printf("\n");
    }
    return 0;
}
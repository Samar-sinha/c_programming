#include<stdio.h>
int main(){
    struct pokemon{ // user defined data type
        int HP;
        int SPEED;
        int ATTACK;
        char TIER;
    } pikachu, charizard, mewtwo;
    
    //struct pokemon pikachu;
    
    pikachu.ATTACK = 60;
    pikachu.HP = 50;
    pikachu.SPEED = 100;
    pikachu.TIER = 'A';

    

    //struct pokemon charizard;

    charizard.ATTACK = 130;
    charizard.HP = 80;
    charizard.SPEED = 80;
    charizard.TIER = 'S';

    printf("%c",charizard.TIER);

    //struct pokemon mewtwo;

    mewtwo.ATTACK = 170;
    mewtwo.HP = 150;
    mewtwo.SPEED = 100;
    mewtwo.TIER = 'G';


    return 0;
}
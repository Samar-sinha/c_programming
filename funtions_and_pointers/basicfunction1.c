#include<stdio.h>
void england(){
    printf("you're in england\n");
    return;
}
void australia(){
    printf("you're in australia\n");
    england(); // calling england
    return;
}
void india(){
    printf("you're in india\n");
    australia(); // calling australia
    return;
}
int main(){
    india(); // calling india
    return 0;
}

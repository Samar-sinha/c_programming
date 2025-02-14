#include<stdio.h>
#include<string.h>
int main(){

    struct person{
        char name[40];
        int salary;
        int age;
    } p1, p2;

    strcpy(p1.name, "Ram");
    p1.salary = 40000;
    p1.age = 25;

    strcpy(p2.name, "Monu");
    p2.salary = 50000;
    p2.age = 26;

    printf("%s\n",p1.name);
    printf("%d",p2.age);
    
    return 0;
}
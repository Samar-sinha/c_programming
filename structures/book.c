#include<stdio.h>
#include<string.h>
int main(){
    typedef struct Book{
        char name[50];
        float price;
        int noOfpages;
    } book; //a, b, c;

    book a;
    a.price = 411.5;
    a.noOfpages = 200;
    strcpy(a.name, "famous five");

    book b;
    b.price = 200.5;
    b.noOfpages = 150;
    strcpy(b.name, "fantastic four");

    printf("%s\n",a.name);
    printf("%.2f\n",a.price);
    printf("%d\n",a.noOfpages);

    return 0;
}
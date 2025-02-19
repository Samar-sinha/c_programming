#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    int* ptr = (int*) calloc(10,sizeof(n));
    printf("%d",*ptr);
    return 0;
}
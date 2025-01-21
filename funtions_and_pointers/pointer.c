#include<stdio.h>
int main(){
    int a = 5;
    int* x = &a; // int* -> int ka address store krta hai.
    printf("%p\n",&a); // %p se address print hota hai.
    printf("%p\n",x);
    printf("%p\n",&x);
    printf("%d\n",*x);
    *x = 50; // a is changed.
    printf("%d\n",a);
    int** y = &x; // int** -> int* ka address store krta hai.
    printf("%p\n",y);  
    printf("%d\n",**y);
    
    return 0;
}
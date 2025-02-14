#include<stdio.h>
typedef int* pointer;
int main(){
    int x = 5, y = 7;
    // int* a = &x, b = &y; wrong approach, only a will be considered as a pointer.
    pointer a = &x, b = &y; // using typedef, now both are considered as pointers. 
    printf("%p\n",a);
    printf("%p\n",b);
    return 0;
}
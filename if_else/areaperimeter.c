#include<stdio.h>
int main(){
    float l,b,a,p;
    printf("Enter length : ");
    scanf("%f",&l);
    printf("Enter breadth : ");
    scanf("%f",&b);
    a = l*b;
    p = 2*(l+b);
    if(a>p){
        printf("area is greater than perimeter");
    }
    else{
        printf("area is not greater than perimeter");
    }
    return 0;
}
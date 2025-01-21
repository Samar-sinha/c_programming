#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter 1st side : ");
    scanf("%d",&a);
    printf("Enter 1st side : ");
    scanf("%d",&b);
    printf("Enter 1st side : ");
    scanf("%d",&c);
    if((b+c)>a && (a+c)>b && (a+b)>c){
        printf("valid triangle.");
    }
    else{
        printf("invalid triangle.");
    }
    return 0;
}
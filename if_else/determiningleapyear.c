#include<stdio.h>
int main(){
    int year;
    printf("Enter the Year : ");
    scanf("%d",&year);
    if(year%4==0){
        printf("It's a Leap Year");
    }
    else{
        printf("It's not a Leap Year");
    }
    return 0;
}
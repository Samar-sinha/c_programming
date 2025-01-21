#include<stdio.h>
int main(){
    double num,sum = 0;
    do{
        printf("Enter the number : ");
        scanf("%lf",&num);
        if(num==(-1*num)) sum -= num;
        else sum += num;
    }
    while(num!=0);
    printf("The sum of the following numbers is %.2lf",sum);
    return 0;
}
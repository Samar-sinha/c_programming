#include<stdio.h>
int main(){
    float x;
    printf("Enter first number\n");
    scanf("%f",&x);
    float y;
    printf("Enter second number\n");
    scanf("%f",&y);
    float sum = x+y;
    printf("Sum of the numbers that you gave is %f",sum);
    return 0;
}
#include<stdio.h>
int main(){
    float x;
    printf("Enter your decimal number : ");
    scanf("%f",&x);
    int y = x;
    float z = x-y;
    printf("Your fractional part Of number is : %f",z);
    return 0;
}
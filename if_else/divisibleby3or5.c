#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(n%3==0 || n%5==0){
        printf("your number is divisible by 3 or 5.");
    }
    else{
        printf("your number is not divisible by 3 or 5.");
    }
    return 0;

}
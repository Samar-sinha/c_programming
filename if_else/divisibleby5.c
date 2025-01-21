#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(n%5==0){
        printf("Yes, It is divisible");
    }
    else{
        printf("No, It is not divisible");
    }
    return 0;
}
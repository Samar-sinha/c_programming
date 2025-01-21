#include<stdio.h>
int main(){
    int n;
    printf("Enter your integer : ");
    scanf("%d", &n);

    if(n < 0){
        printf("invalid input. (try putting a positive integer)");
        return 1;
    }
    else if(n == 0){
        printf("your number is divisible by both 3 and 5.");
    }
    else{
        if(n % 3 == 0 && n % 5 == 0){
            printf("your number is divisible by 3 and 5. ");
        }
        else if(n % 3 == 0){
            printf("your number is only divisible by 3.");
        }
        else if(n % 5 == 0){
            printf("your number is only divisible by 5.");
        }
        else{
            printf("your number is not divisible by 3 and 5.");
        }
    }

    return 0;
}
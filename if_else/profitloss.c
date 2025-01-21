#include<stdio.h>
int main(){
    float cp,sp,profit,loss;
    printf("Enter Cost price : ");
    scanf("%f",&cp);
    printf("Enter Selling price : ");
    scanf("%f",&sp);
    profit = sp-cp;
    loss = cp-sp;
    if(cp>sp){
        printf("loss = %f",loss);
    }
    if(sp>cp){
        printf("profit = %f",profit);
    }
    if(cp==sp){
        printf("No profit, No loss");
    }
    return 0;
}
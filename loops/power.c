#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the base :");
    scanf("%d",&a);
    printf("Enter the power :");
    scanf("%d",&b);
    int product = 1;
    for(int i=1;i<=b;i++){
        product = product * a;
    }
    printf("%d raised to %d is %d.",b,a,product);
    return 0;
}
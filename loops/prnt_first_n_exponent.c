#include<stdio.h>
int main(){
    int a = 2,b;
    // printf("Enter the base :");
    // scanf("%d",&a);
    printf("Enter the power :");
    scanf("%d",&b);
    int product = 1;
    for(int i=1;i<=b;i++){
        printf("%d raised to 2 is %d.\n",i,product);
        product = product * a;
    }
    return 0;
}
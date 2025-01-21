#include<stdio.h>
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    int m = n;
    int reverse = 0;
    while(n>0){
        reverse = reverse*10;
        reverse = reverse + (n%10);
        n = n/10;
    }
    printf("The sum of the given number and its reverse is %d.",m+reverse);
    return 0;
}
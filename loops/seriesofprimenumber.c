#include<stdio.h>
int main(){
    int n, count=0, num=2;
    printf("Enter the no. of prime numbers to generate : ");
    scanf("%d",&n);
    while(count<n){
        int isprime = 1;
        for(int i=2;i*i<=num;i++){
            if(num%i==0){ 
            isprime = 0;
            break;
            }
        }
        if(isprime){
            printf("%d ",num);
            count++;
        }
        num++;
    }
    printf("\n");
    return 0; 
}
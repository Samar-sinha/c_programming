#include<stdio.h>
void prime_factors(int p){
    int a;
    for(int a=2; a<=p; a++){
        if(p%a==0){
            printf("%d, ",a);
            p=p/a;
            a--;
        }
    }
}
int main(){
    int n;
    printf("Enter a Positive number : ");
    scanf("%d",&n);
    prime_factors(n);
    return 0;
}
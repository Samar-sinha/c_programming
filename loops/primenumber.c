#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int a = 0;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){ // i is a factor of n
            a = 1;
            break;
        }
    }
    if(n==1) printf("1 is neither composite nor prime. ");
    else if(a==0) printf("%d is a prime number.",n);
    else printf("%d is a composite number.",n);
    return 0;
}
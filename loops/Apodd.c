#include<stdio.h>
int main(){
    int n;
    printf("Enter the nth term : ");
    scanf("%d",&n);
    // 1 3 5 7 9 ...
    for(int i=1;i<=2*n-1;i=i+2){
        printf("%d ",i);
    }
    return 0;
}
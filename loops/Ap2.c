#include<stdio.h>
int main(){
    int n;
    printf("Enter the nth term : ");
    scanf("%d",&n);
    // 4 7 10 13 16 19
    for(int i=4;i<=3*n+1;i=i+3){
        printf("%d ",i);
    }
    return 0;
}
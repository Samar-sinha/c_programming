#include<stdio.h>
int main(){
    int n;
    printf("Enter the no. of lines : ");
    scanf("%d",&n);
    int num = 1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf("  ");
        }
        for(int k=1;k<=num;k++){
            printf("%d ",k);
        }
        num+=2;
    printf("\n");
    }
    return 0;
}
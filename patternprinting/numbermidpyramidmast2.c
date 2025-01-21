#include<stdio.h>
int main(){
    int n;
    printf("Enter no. of lines : ");
    scanf("%d",&n);
    int nsp = 1;
    int nod = n-1;
    for(int i=1;i<=2*n-1;i++){
        if(i<=n) printf("%d ",i);
        else printf("%d ",2*n-i);
    }
    printf("\n");
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=nod;j++){
            printf("%d ",j);
        }
        for(int k=1;k<=nsp;k++){
            printf("  ");
        }
        for(int j=nod;j>=1;j--){
            printf("%d ",j);
        }
        nsp+=2;
        nod--;
        printf("\n");
    }
    return 0;
}
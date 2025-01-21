#include<stdio.h>
int main(){
    int n;
    printf("Enter no. of lines : ");
    scanf("%d",&n);
    int nsp = 1;
    int nod = n-1;
    for(int i=1;i<=2*n-1;i++){
        printf("%d",i);
    }
    printf("\n");
    for(int i=1;i<=n-1;i++){
        int a = 1;
        for(int j=1;j<=nod;j++){
            printf("%d",a);
            a++;
        }
        for(int k=1;k<=nsp;k++){
            printf(" ");
            a++;
        }
        for(int j=1;j<=nod;j++){
            printf("%d",a);
            a++;
        }
        nsp+=2;
        nod--;
        printf("\n");
    }
    return 0;
}
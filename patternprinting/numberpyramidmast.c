#include<stdio.h>
int main(){
    int n;
    printf("Enter the no. of lines : ");
    scanf("%d",&n);
    int nsp = n-1;
    for(int i=1;i<=n;i++){
        for(int q=1;q<=nsp/*n-i*/;q++){ //n-i can also be used if nsp not declared.
            printf("  ");
        }
        nsp--;
        for(int j=1;j<=i;j++){
            printf("%d ",j);
        }
        int a =  i-1;
        for(int k=1;k<=i-1;k++){
            printf("%d ",a);
            a--;
        }
    printf("\n");
    }
    return 0;
}
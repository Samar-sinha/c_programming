#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int a = 7;
    for(int i=1;i<=n;i++){
        printf("%d ",a);
        a = a + 5;
    }
    return 0;
}
#include<stdio.h>
int main(){
    int n;
    printf("Enter the nth terms : ");
    scanf("%d",&n);
    int a = 1;
    int b = 1;
    // 1 1 2 3 5 8 13 21 34 55 89...
        for(int i=1;i<=n;i++){
            printf("%d ",a);
            int sum = a + b;
            a = b;
            b = sum;
        }
    return 0;
}
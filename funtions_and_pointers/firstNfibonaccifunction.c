#include<stdio.h>
void fibonacci(int n){
    int a = 0, b = 1, next;
    for(int i=1; i<=n; i++){
        printf("%d, ",a);
        next = a+b;
        a = b;
        b = next;
    }
}
int main(){
    int n;
    printf("Enter the number of term : ");
    scanf("%d",&n);
    fibonacci(n);
    return 0;
}
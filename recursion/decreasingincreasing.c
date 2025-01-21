#include<stdio.h>
// n to 1 then 1 to n
void INC_DEC(int n){
   if(n==0) return;
    printf("%d\n",n);
    INC_DEC(n-1);
    printf("%d\n",n);
    return;
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    INC_DEC(n);
    return 0;
}
#include<stdio.h>
int main(){
    int n;
    // 1 - 2 + 3 - 4 + 5 - 6 + ..... n terms.
    printf("Enter number of terms : ");
    scanf("%d",&n);
    int sum = 0;
    for(int i=1;i<=n;i++){
        if(i%2!=0) sum = sum + i;
        else sum = sum - i;
    }
    printf("The sum of the sequece is %d.",sum);
    return 0;
}
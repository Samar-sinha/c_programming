#include<stdio.h>
int main(){
    int n;
    // 1 - 2 + 3 - 4 + 5 - 6 + ..... n terms.
    printf("Enter number of terms : ");
    scanf("%d",&n);
    int sum = 0;
    if(n%2==0) sum = -n/2;
    else sum = -n/2 + n ;
    printf("The sum of the series is %d.",sum);
    return 0;
}
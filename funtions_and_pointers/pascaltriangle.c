#include<stdio.h>
// int factorial(int x){
//     int fact = 1;
//     for(int i=1; i<=x; i++){
//         fact *= i;
//     }
//     return fact;    
// }
// int combination(int n, int r){
//     int ncr = factorial(n)/(factorial(r)*factorial(n-r));
//     return ncr;
// }
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    for(int i=0; i<=n; i++){
        for(int k=0; k<n-i; k++){
            printf("  ");
        }
        int first = 1;
        for(int j=0; j<=i; j++){
            // int ncr = combination(i,j);
            // printf("%3d ",ncr);
            printf("%3d ",first);
            first = first * (i-j)/(j+1); // iC(j+1)
        }
        printf("\n");
    }
    return 0;
}
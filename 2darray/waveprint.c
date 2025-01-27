#include<stdio.h>
int main(){
    int m,n;
    printf("Enter the order of matrix A :\n");
    scanf("%d %d",&m,&n);
    int a[m][n];
    printf("Enter the elements of matrix A : \n");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d",&a[i][j]);
        }
    }    
    // wave print
    for(int i=0; i<m; i++){
        if(i%2==0){
            for(int j=0; j<n; j++){
                printf("%d ",a[i][j]);
            }
        }
        else{
            for(int j=n-1; j>=0; j--){
                printf("%d ",a[i][j]);
            }
        }
        printf("\n");
    }    
    return 0;
}
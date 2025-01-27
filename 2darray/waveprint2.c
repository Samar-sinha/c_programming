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
    // wave print 2
    printf("\n");
    for(int j=0; j<n; j++){
        if(j%2==0){
            for(int i=m-1; i>=0; i--){
                printf("%d ",a[i][j]);
            }
        }
        else{
            for(int i=0; i<m; i++){
                printf("%d ",a[i][j]);
            }
        }
        printf("\n");
        }    
    return 0;
}
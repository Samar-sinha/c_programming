#include<stdio.h>
int main(){
    int m,n;
    printf("Enter the order of matrix A :\n");
    scanf("%d %d",&m,&n);
    int a[m][n];

    int p,q;
    printf("Enter the order of matrix B :\n");
    scanf("%d %d",&p,&q);
    int b[p][q];
    if(n!=p){
        return printf("Invalid order.");
    }
    
    printf("Enter the elements of matrix A : \n");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter the elements of matrix B : \n");
    for(int i=0; i<p; i++){
        for(int j=0; j<q; j++){
            scanf("%d",&b[i][j]);
        }
    }

    int res[m][q];
    // multiplying
    for(int i=0; i<m; i++){
        for(int j=0; j<q; j++){
            res[i][j] = 0;
            // i row of a[][] and j column of b[][]
            //(a[i][0],a[i][1],a[i][2],...) * (b[0][j],b[1][j],b[2][j],...);
            for(int k=0; k<n; k++){
                res[i][j] += a[i][k] * b[k][j]; 
            }
        }
    }
    printf("\nThe matrix multiplication is : \n");
    for(int i=0; i<m; i++){
        for(int j=0; j<q; j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    return 0;
}
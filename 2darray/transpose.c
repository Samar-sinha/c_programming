#include<stdio.h>
int main(){
    int n;
    printf("Enter the no. of rows : ");
    scanf("%d",&n);
    int m;
    printf("Enter the no. of column : ");
    scanf("%d",&m);
    int arr[n][m];
    printf("Enter the elements of the matrix.\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int brr[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            brr[i][j] = arr[j][i];
            //printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%d ",brr[i][j]);
    }
    printf("\n");
    }
    return 0;
}
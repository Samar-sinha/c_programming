#include<stdio.h>
int main(){
    int n;
    printf("Enter no. of rows : ");
    scanf("%d",&n);
    int m;
    printf("Enter no. of columns : ");
    scanf("%d",&m);
    int arr[n][m];
    int brr[n][m];
    printf("Enter the elements in first matrix : ");
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Enter the elements in second matrix : ");
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d",&brr[i][j]);
        }
    }
    printf("\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            arr[i][j] = arr[i][j] + brr[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
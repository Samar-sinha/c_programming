#include<stdio.h>
int main(){
    int n;
    printf("Enter no. of rows : ");
    scanf("%d",&n);
    int m;
    printf("Enter no. of columns : ");
    scanf("%d",&m);
    int arr[n][m];
    int sum = 0;
    printf("Enter the elements of matrix : \n");
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d",&arr[i][j]);
            sum += arr[i][j];
        }
    }
    printf("\nThe matrix is\n");

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("The sum of the elements of the matrix is %d",sum);
    return 0;
}
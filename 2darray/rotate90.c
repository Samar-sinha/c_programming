#include<stdio.h>
int main(){
    
    int n;
    printf("Enter no. of rows/columns : ");
    scanf("%d",&n);
    
    int arr[n][n];
    printf("Enter the elements : \n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0,k=n-1; j<n,k>=0; j++,k--){
            if(j<k){
                int temp = arr[i][j];
                arr[i][j] = arr[i][k];
                arr[i][k] = temp;
            }
        }
    }
    printf("\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
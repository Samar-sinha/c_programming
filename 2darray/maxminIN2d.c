#include<stdio.h>
#include<limits.h>

int main(){
    int n;
    printf("Enter no. of rows : ");
    scanf("%d",&n);
    int m;
    printf("Enter no. of columns : ");
    scanf("%d",&m);

    int arr[n][m];
    printf("Enter the elements in matrix : ");
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    int max = INT_MIN;
    int min = INT_MAX;
    int max_row, max_col, min_row, min_col;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j]>max){ 
                max = arr[i][j];
                max_row = i;
                max_col = j;
            }
            if(arr[i][j]<min){
                min = arr[i][j];
                min_row = i;
                min_col = j; 
            }
        }
    }
    printf("The max element is %d and its index is (%d,%d).\n",max,max_row,max_col);
    printf("The min element is %d and its index is (%d,%d).\n",min,min_row,min_col);
    return 0;
}
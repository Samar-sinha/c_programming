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
    printf("Enter the elements of matrix : \n");
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    
    int maxsum = INT_MIN;
    int row;
    for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=0; j<m; j++){
            sum += arr[i][j];
        }
        if(sum>maxsum){
            maxsum = sum; 
            row = i+1;
        }
        
    }
    printf("The max sum of a row is %d and its row no. is %d.",maxsum,row);
    return 0;
}
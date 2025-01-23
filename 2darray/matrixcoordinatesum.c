#include<stdio.h>

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

    int l1, r1, l2, r2;
    printf("Enter intial coordinates : ");
    scanf("%d %d",&l1,&r1);
    printf("Enter final coordinates : ");
    scanf("%d %d",&l2,&r2);

    int sum = 0;
    for(int i=l1; i<=l2; i++){
        for(int j=r1; j<=r2; j++){
            sum += arr[i][j];
        }
    }
    printf("\n");
    printf("The sum of the rectangle from (%d,%d) to (%d,%d) is %d",l1,r1,l2,r2,sum);
    return 0;
}
#include<stdio.h>
int main(){

    int m,n;
    printf("Enter the no. of rows/column :\n");
    scanf("%d %d",&m,&n);

    int a[m][n];

    printf("\nEnter the elements of the matrix : \n");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d",&a[i][j]);
        }
    }    

    // spiral print
    int minr = 0; // minimum row
    int maxr = m-1; // maximum row
    int minc = 0; // minimum column
    int maxc = n-1; // maximum column
    int tne = m*n; // total no. of element
    int count = 0;
    while(count<tne){
        // print the minimum row
        for(int j=minc; j<=maxc && count<tne; j++){ 
            printf("%d ",a[minr][j]);
            count++;
        }
        minr++;
        // print maximum column
        for(int i=minr; i<=maxr && count<tne; i++){
            printf("%d ",a[i][maxc]);
            count++;
        }
        maxc--;
        // print maximum row
        for(int j=maxc; j>=minc && count<tne; j--){
            printf("%d ",a[maxr][j]);
            count++;
        }
        maxr--;
        // print minimum column
        for(int i=maxr; i>=minr && count<tne; i--){
            printf("%d ",a[i][minc]);
            count++;
        }
        minc++;
    }
    return 0;
}
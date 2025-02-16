// iput = 3 -> 
/* output
   7 8 9
   6 1 2
   5 4 3 */
#include<stdio.h>
int main(){

    int n;
    printf("Enter the no. of rows/column :\n");
    scanf("%d",&n);

    int a[n][n]; 

    // spiral print
    int minr = 0; // minimum row
    int maxr = n-1; // maximum row
    int minc = 0; // minimum column
    int maxc = n-1; // maximum column
    int tne = n*n; // total no. of element
    int count = 0;
    int ele = n*n;
    while(count<tne){
        // print the minimum row
        for(int j=maxc; j>=minc && count<tne; j--){ 
            a[minr][j] = ele;
            ele--;
            count++;
        }
        minr++;
        // print minimum column
        for(int i=minr; i<=maxr && count<tne; i++){
            a[i][minc] = ele;
            ele--;
            count++;
        }
        minc++;
        // print maximum row
        for(int j=minc; j<=maxc && count<tne; j++){
            a[maxr][j] = ele;
            ele--;
            count++;
        }
        maxr--;
        // print maximum column
        for(int i=maxr; i>=minr && count<tne; i--){
            a[i][maxc] = ele;
            ele--;
            count++;
        }
        maxc--;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
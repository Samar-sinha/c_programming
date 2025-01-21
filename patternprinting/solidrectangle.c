#include<stdio.h>
int main(){
    int n;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    int m;
    printf("Enter number of columns : ");
    scanf("%d",&m);
    //  ********..... upto n no of stars
    for(int i=1;i<=n;i++){ // outer loop -> no of lines. (rows)
        for(int j=1;j<=m;j++){ // inner loop -> no of stars in each line. (columns)
            printf(" * ");
        }
        printf("\n"); // har line ke baad enter maarne ke liye hai.
    }
    return 0;
}
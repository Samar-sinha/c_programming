#include<stdio.h>
int main(){
    int r;
    printf("Enter rows : ");
    scanf("%d",&r);
    int marks[r][4];
    printf("Enter information : \n");
    for(int i=0; i<r; i++){
        for(int j=0; j<4; j++){
            scanf("%d",&marks[i][j]);
        }
    }
    printf("\n");
    printf(" roll No.    Phyics     Chem    Maths");
    printf("\n");
    for(int i=0; i<r; i++){
        for(int j=0; j<4; j++){
            printf("%8d ",marks[i][j]);
        }
        printf("\n");
    }
    return 0;
}
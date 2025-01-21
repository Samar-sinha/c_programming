#include<stdio.h>
int main(){
    int x,y;
    printf("Enter the coordinates : ");
    // scanf("%d",&x);
    // scanf("%d",&y);
    scanf("%d %d",&x,&y);
    if(x==0 && y==0){
        printf("Lies on origin.");
    }
    else if(x==0){
        printf("Lies on y-Axis.");
    }
    else if(y==0){
        printf("Lies on X-Axis.");
    }
    else{
        printf("The point does not lie on x-axis or y-axis.");
    }
    return 0;
}
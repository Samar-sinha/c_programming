#include<stdio.h>
int main(){
    double x1,x2,x3,y1,y2,y3;
    printf("Enter x1 : ");
    scanf("%lf",&x1);
    printf("Enter x2 : ");
    scanf("%lf",&x2);
    printf("Enter x3 : ");
    scanf("%lf",&x3);
    printf("Enter y1 : ");
    scanf("%lf",&y1);
    printf("Enter y2 : ");
    scanf("%lf",&y2);
    printf("Enter y3 : ");
    scanf("%lf",&y3);
    double m1 = (y2 - y1)/(x2 - x1);
    double m2 = (y3 - y2)/(x3 - x2);
    if(m1==m2){
        printf("All three points fall on the straight line");
    }
    else{
        printf("All three points do not fall on the straight line");
    }
    return 0;
}
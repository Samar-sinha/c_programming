#include<stdio.h>  // ages are distinct 
int main(){
    int ram;
    printf("Enter the of Ram : ");
    scanf("%d",&ram);
    int shyam;
    printf("Enter the of shyam : ");
    scanf("%d",&shyam);
    int ajay;
    printf("Enter the of ajay : ");
    scanf("%d",&ajay);
    if(ajay<ram && ajay<shyam){
        printf("ajay is the youngest.");
    }
    else if(ram<ajay && ram<shyam){
        printf("ram is youngest.");
    }
    else if(shyam<ajay && shyam<ram){
        printf("shyam is youngest.");
    }
    return 0;
}
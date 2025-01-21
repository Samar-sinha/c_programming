#include<stdio.h>
int main(){
    int ram,shyam,arjun;
    printf("Enter the age of ram : ");
    scanf("%d",&ram);
    printf("Enter the age of shyam : ");
    scanf("%d",&shyam);
    printf("Enter the age of arjun : ");
    scanf("%d",&arjun);
    if(ram<shyam){
        if(ram<arjun)
            printf("ram is youngest.");
        else
            printf("arjun is youngest.");
    }
    else{
        if(shyam<arjun)
            printf("shyam is youngest.");
        else
            printf("arjun is youngest.");
    }
    return 0;
}
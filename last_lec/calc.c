#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    char ch;
    scanf("%c",&ch);
    int m;
    scanf("%d",&m);
    switch(ch){
        case '+' : 
            printf("%d\n",n+m);
            break;
        case '-' : 
            printf("%d\n",n-m);
            break;
        case '*' : 
            printf("%d\n",n*m);
            break;
        case '/' : 
            printf("%f\n",(float)n/m);
            break;
        default : 
            printf("Invalid operator.");
    }
    return 0;
}
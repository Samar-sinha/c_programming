#include<stdio.h>
#include<string.h>
int main(){

    char str[100];
    printf("Enter the string : \n");
    fgets(str, 100, stdin);

    // finding size
    int size = 0;
    int k=0;
    while(str[k]!='\0'){
        size++;
        k++;
    }

    char str2[size];
    
    for(int i=0; i<=size; i++){
        str2[i] = str[i]; 
    }

    puts(str2);

    return 0;
}
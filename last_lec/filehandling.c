#include<stdio.h>
int main(){
    // Readinh a file

    // FILE* ptr = fopen("samar.txt","r");
    // char str[100];
    // while(fgets(str, 100, ptr)!=NULL)
    //     printf("%s",str);

    // Creating a file
 
    FILE* ptr = fopen("gautam.txt","w");
    char str[] = "I am gautam";
    fputs(str, ptr);
    fclose(ptr);
}
#include<stdio.h>
#include<string.h>
int main(){
    //char str[] = "College wallah is the best for coding!";
    // int i=0;
    // while(arr[i]!='\0'){
    //     printf("%c",arr[i]);
    //     i++;
    // } 

    // printf("%s\n",str);
    // puts(str);
    
    char str[40];
    //scanf("%s",str); // only the first word will be considered
    //scanf("%[^\n]s",str);

    gets(str); // entire Entire sentence can be taken input.
    //printf("your output was : %s",str);
    puts(str);
    return 0;
}
#include<stdio.h>
#include<string.h>
int main(){
    // char str[] = "College Wallah";
    // char* ptr = str; // ptr now points to str[0]
    // //char* ptr = &str[0]; //is the same thing as the above initialization
    // printf("%p\n",ptr);
    // printf("%p",str); //is same as the above ptr here


    // int i = 0;
    // while(*ptr!='\0'){
    //     printf("%c",*ptr);
    //     ptr++;
    //     i++;
    // }

    // char str[] = "college Wallah";
    // char* ptr = str; 
    // ptr = "physics wallah"; // nayi string bani hai waha ab point krega naki "college wallah" pe lekin str abhi bhi wahi hai.
    // printf("%s",str); // will only print original initialization because ptr now points "physics wallah" but str still holds "college wallah"
    // char* p = str;
    // *p = 'p';
    // printf("%s",str);

    char *ptr = "Physics wallah"; // read only memory allocation  cant change individual character
    printf("%s",ptr);
    return 0;
}
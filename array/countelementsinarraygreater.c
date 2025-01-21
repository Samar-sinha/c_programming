#include<stdio.h>
int main(){
    int arr[8] = {1,5,9,7,3,6,4,0};
    int compare_with = 1;
    int count = 0;
    for(int i=0; i<8; i++){
        if(arr[i]>compare_with) 
        count ++; 
    }
    printf("%d",count);
    return 0;
}
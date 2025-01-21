#include<stdio.h>
#include<limits.h>
int main(){
    int arr[5] = {20,95,4,40,7};
    int min = INT_MAX;
    for(int i=0; i<5; i++){
        if(min>arr[i])
        min = arr[i];
    }
    printf("%d",min);
    return 0;
}
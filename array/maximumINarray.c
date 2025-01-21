#include<stdio.h>
int main(){
    int arr[10] = {40,65,78,95,69,41,2,20,10,9};
    int max = arr[0];
    for(int i=0; i<10; i++){
        if(max<arr[i])
        max = arr[i];
    }
    printf("%d",max);
    return 0;
}
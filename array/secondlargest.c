#include<stdio.h>
#include<limits.h>
int main(){
    int arr[7] = {10,6,7,10,11,2,5};
    int max = INT_MIN;
    int smax = INT_MIN;
    for(int i=0; i<7; i++){
    //     if(max<arr[i])
    //     max = arr[i];
    // }
    // for(int i=0; i<7; i++){
    //     if(smax<arr[i] && arr[i]<max)
    //     smax = arr[i];
    // }
        if(max<arr[i]){
            smax = max; //smax is now the previous max
            max = arr[i]; // max is the new max
        }
        else if(smax<arr[i] && max!=arr[i]){ // max>arr[i]
            smax = arr[i];
        }
    }
    printf("%d",smax);
    return 0;
}
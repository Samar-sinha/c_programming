#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[7] ={87,69,1,57,86,35,78};
    int x = 88;
    bool flag = false;
    int idx = -1;
    for(int i=0; i<=6; i++){
        if(arr[i]==x){
            flag = true;
            idx = i;
            break;
        }
    }
    if(flag==false){
        printf("%d does not exist in the array.",x);
    }
    else{
        printf("%d exists in the array and its index is %d.",x,idx);
    }
    return 0;
}
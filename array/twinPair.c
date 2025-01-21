#include<stdio.h>
int main(){
    int arr[8] = {1,2,3,4,5,6,7,8};
    int pair_count = 0;
    int x = 8;
    for(int i=0; i<8; i++){
        for(int j=i+1; j<8; j++){
            if(arr[i] + arr[j] == x){
                pair_count++;
                printf("(%d,%d)\n",arr[i],arr[j]);
            }
        }
    }
    printf("%d",pair_count);
    return 0;
}
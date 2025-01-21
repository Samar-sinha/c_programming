#include<stdio.h>
int main(){
    int arr[19] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,20};
    int sum = 0;
    int sum2 = 20*(20+1)/2;
    for(int i=0; i<19; i++){
        sum += arr[i];
    }
    printf("The missing number is : %d",sum2-sum);
    return 0;
}
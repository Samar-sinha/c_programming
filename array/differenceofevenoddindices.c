#include<stdio.h>
int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    int sumEven = 0;
    int sumOdd = 0;
    for(int i=0; i<7; i++){
        if(i%2==0)
        sumEven += arr[i];
        else
        sumOdd += arr[i];
    }
    printf("The Difference b/w the sum of even indicies element to odd indices element is %d.",sumEven-sumOdd);
    return 0;
}